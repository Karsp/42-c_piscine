/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:14:23 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/22 19:24:40 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		c;
	const char	st1;

	c = 0;
	while (((const char *) s1[c] != '\0' || (const char *) \
				s2[c] != '\0') && c < n)
	{
		if ((char *) s1[c] != (char *) s2[c])
			return ((char *) s1[c] - (char *) s2[c]);
		c++;
	}
	return ((char *) s1[c] - (char *) s2[c]);
}
/*
#include<stdio.h>

int	main(void)
{
	char	s1 [] = "Geek in the pink";
	char	s2 [] = "Geek in the scene";
	size_t	n;

	n = 6;
	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
	return (0);
}
*/
