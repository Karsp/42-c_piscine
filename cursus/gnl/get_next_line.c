/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:06:04 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/26 19:21:10 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"get_next_line.h"

int	ft_strposchr(const char *s, int c)
{
	int		count;

	count = 0;
	if (s)
	{
		while (((char *) s)[count] != '\0')
		{
			if (((char *) s)[count] == (char) c)
				return (count);
			count++;
		}
	}
	return (-1);
}

char	*ft_saveline(char **waste)
{
	char		*rln;
	char		*tmp;
	int			to;
	size_t		size;

	size = ft_strposchr(*waste, '\n');
	if (ft_strposchr(*waste, '\n') != -1 && size != ft_strlen(*waste))
	{
		to = ft_strposchr(*waste, '\n') + 1;
		rln = ft_substr(*waste, 0, to);
		tmp = *waste;
		*waste = ft_substr(*waste, to, ft_strlen(*waste));
		free(tmp);
		tmp = NULL;
	}
	else
	{
		to = ft_strlen(*waste);
		rln = ft_substr(*waste, 0, to);
		free(waste);
		waste = NULL;
	}
	return (rln);
}

int	ft_read(char **waste, int fd)
{
	int		r;
	char	*tmp;
	char	*buf;

	buf = (char *) ft_calloc (BUFFER_SIZE + 1, 1);
	r = 1;
	while (r > 0 && ft_strposchr(buf, '\n') == -1)
	{
		ft_bzero(buf, BUFFER_SIZE);
		r = read(fd, buf, BUFFER_SIZE);
		tmp = *waste;
		*waste = ft_strjoin(*waste, buf);
		free(tmp);
		tmp = NULL;
	}
	if (r <= 0)
	{
		if (r == 0)
			*waste = ft_strjoin(*waste, buf);
		free(buf);
		buf = NULL;
		return (0);
	}
	free(buf);
	return (1);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*waste;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	if (waste == NULL)
		waste = (char *) ft_calloc (1, 1);
	if (ft_strposchr(waste, '\n') == -1)
	{
		if (ft_read(&waste, fd) == 0)
		{
			free(waste);
			waste = NULL;
			return (0);
		}
	}
	line = ft_saveline(&waste);
	return (line);
}
/*
int	main(void)
{
	int		fd;
	char	*line = "";
	int		i;

	i = 1;
	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("Result %d: %s", i, line);
		free(line);
		line = NULL;
		line = get_next_line(fd);
		i++;
	}
    close(fd);
//	system("leaks a.out");
	return (0);
}
*/
