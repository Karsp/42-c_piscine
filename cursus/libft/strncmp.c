/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:05:19 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:29:46 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	c;

	c = 0;
	while (((char *) s1)[c] != '\0' && ((char *) s2)[c] != '\0' && c < size)
	{
		if (((char *) s1)[c] != ((char *) s2)[c])
			return (((char *) s1)[c] - ((char *) s2)[c]);
		c++;
	}
	return (((char *) s1)[c] - ((char *) s2)[c]);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	s1[] = "holala";
	char	s2[] = "holalala";
	int		size = 4;

	printf("%d\n", ft_strncmp(s1, s2, size));
	printf("%d\n", strncmp(s1, s2, size));
	return (0);
}
*/
