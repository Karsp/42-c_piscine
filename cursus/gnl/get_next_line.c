/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:06:04 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/17 22:12:10 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"get_next_line.h"

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

char	*ft_read(char **waste, void *buf, int fd)
{
	while (ft_strposchr((char *)buf, '\n') == -1)
	{
		ft_savewaste((char *)buf, &*waste);
		if (read(fd, buf, BUFFER_SIZE) == 0)
		{
			ft_savewaste((char *)buf, &*waste);
			return (NULL);
		}
		if (read(fd, buf, BUFFER_SIZE) == -1)
			return (NULL);
	}
	return (buf);
}

char	*get_next_line(int fd)
{
	char		*buf;
	char		*line;
	static char	*waste;

	if (fd <= 0 || BUFFER_SIZE < 1)
		return (NULL);
	buf = (char *) ft_calloc (BUFFER_SIZE + 1, 1);
	if (waste == NULL)
		waste = (char *) ft_calloc (1, 1);
	if (ft_strposchr(waste, '\n') != -1)
	{
		line = ft_saveline(waste);
		ft_savewaste(waste, &waste);
		return (line);
	}
	if (ft_read(&waste, buf, fd) == NULL)
	{
		free(waste);
		free(buf);
		return (NULL);
	}
	line = ft_saveline(ft_strjoin(waste, (char *) buf));
	ft_savewaste((char *)buf, &waste);
	return (line);
}
/* 
int	main(void)
{
	int		fd;
	char	*line = "";

	fd = open("test.txt", O_RDONLY);
//	fd = 8;

	printf("Result 1: %s\n", get_next_line(fd));
	printf("Result 2: %s\n", get_next_line(fd));
	printf("Result 3: %s\n", get_next_line(fd));
	printf("Result 4: %s\n", get_next_line(fd));
	printf("Result 5: %s\n", get_next_line(fd));
	printf("Result 6: %s\n", get_next_line(fd));
	while (line)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}

    close(fd);
	return (0);
}
*/
