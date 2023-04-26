/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:17:51 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/24 19:31:21 by daviles-         ###   ########.fr       */
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

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (((char *) s)[count] != '\0')
		count++;
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	c;

	c = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		sub = (char *) malloc (ft_strlen(s) + 1);
	else
		sub = (char *) malloc (len + 1);
	if (!sub)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (s[start + c] != '\0' && c < len)
		{
			sub[c] = s[start + c];
			c++;
		}
	}
	sub[c] = '\0';
	return (sub);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		c;
	int		i;

	c = 0;
	i = 0;
	s3 = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[c] != '\0')
	{
		s3[c] = s1[c];
		c++;
	}
	while (s2[i] != '\0')
	{
		s3[c + i] = s2[i];
		i++;
	}
	s3[c + i] = '\0';
	return (s3);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	c;

	c = 0;
	ptr = (void *) malloc (count * size);
	if (!ptr)
		return (NULL);
	while (c < (count * size))
	{
		((char *) ptr)[c] = '\0';
		c++;
	}
	return (ptr);
}