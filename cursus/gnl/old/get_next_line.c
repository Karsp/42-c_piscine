/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:06:04 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/24 21:04:33 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"get_next_line.h"

void	ft_free(char *ptr, char *ptr2)
{
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
	if (ptr2)
	{
		free(ptr2);
		ptr2 = NULL;
	}
}

void	ft_savewaste(char *buf, char **waste)
{
	int			from;

	if (ft_strposchr(buf, '\n') == -1)
		from = 0;
	else
		from = ft_strposchr(buf, '\n') + 1;
	free(*waste);
	*waste = NULL;
	*waste = ft_substr(buf, from, ft_strlen(buf));
}

char	*ft_saveline(void *buf)
{
	char		*rln;
	int			to;

	if (ft_strposchr(buf, '\n') == -1)
		to = ft_strlen(buf);
	else
		to = ft_strposchr(buf, '\n') + 1;
	rln = ft_substr(buf, 0, to);
	return (rln);
}

char	*ft_read(char **waste, void *buf, int fd)
{
	int		str;
	char	*join;

	str = read(fd, buf, BUFFER_SIZE);
	while (ft_strposchr((char *)buf, '\n') == -1)
	{
		if (str <= 0)
		{
			if (str == 0)
				ft_savewaste((char *)buf, &*waste);
			return (NULL);
		}
		join = ft_strjoin(*waste, buf);
		ft_savewaste(join, &*waste);
		free(join);
		join = NULL;
		str = read(fd, buf, BUFFER_SIZE);
	}
	return (buf);
}

char	*get_next_line(int fd)
{
	void		*buf;
	char		*line;
	char		*join;
	static char	*waste;

	if (fd < 0 || BUFFER_SIZE < 1)
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
		waste = NULL;
		buf = NULL;
		return (NULL);
	}
	join = ft_strjoin(waste, (char *) buf);
	line = ft_saveline(join);
	ft_savewaste((char *)buf, &waste);
	ft_free(join, buf);
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
	//system("leaks a.out");
	return (0);
}
*/
