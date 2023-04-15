/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:06:04 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/15 23:09:16 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"get_next_line.h"

int	ft_strposchr(const char *s, int c)
{
	int		count;

	count = 0;
	while (((char *) s)[count] != '\0')
	{
		if (((char *) s)[count] == ((char) c))
			return (count);
		count++;
	}
	return (-1);
}

void	ft_savewaste(char *buf, char **waste)
{
	int			from;
	char		*old;

	if (ft_strposchr(buf, '\n') == -1)
		from = 0;
	else
		from = ft_strposchr(buf, '\n') + 1;
	old = *waste;
	*waste = ft_substr(buf, from, ft_strlen(buf));
	free(old);
}

char	*ft_saveline(void *buf)
{
	char		*rln;
	int			to;

	if (ft_strposchr(buf, '\n') == -1)
		to = ft_strlen(buf);
	else
		to = ft_strposchr(buf, '\n');
	rln = ft_substr(buf, 0, to);
	return (rln);
}

char	*get_next_line(int fd)
{
	void		*buf[BUFFER_SIZE + 1];
	char		*line;
	static char	*waste;
	char		*old;

	if (waste == NULL)
		waste = (char *) ft_calloc (1, 1);
	if (ft_strposchr(waste, '\n') != -1)
	{
		line = ft_saveline(waste);
		ft_savewaste(waste, &waste);
		return (line);
	}
	read(fd, buf, BUFFER_SIZE);
	if (!fd || !BUFFER_SIZE)
		return (NULL);
	while (ft_strposchr((char *)buf, '\n') == -1)
	{
		old = waste;
		ft_savewaste((char *)buf, &waste);
		free(waste);
		read(fd, buf, BUFFER_SIZE);
	}
	line = ft_saveline(ft_strjoin(waste, (char *) buf));
	ft_savewaste((char *)buf, &waste);
	return (line);
}
/*
int	main(void)
{
	int		fd;
	int		c;

	fd = open("test.txt", O_RDONLY);
//	fd = 2;
	c = 1;
	if (!fd)
		return (0); 
	printf("Result 1: %s\n", get_next_line(fd));
	printf("Result 2: %s\n", get_next_line(fd));
	printf("Result 3: %s\n", get_next_line(fd));
	printf("Result 4: %s\n", get_next_line(fd));
	printf("Result 5: %s\n", get_next_line(fd));
	return (0);
}
*/
