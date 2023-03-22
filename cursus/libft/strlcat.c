/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:36:42 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/22 14:51:55 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;

	c = 0;
	i = 0;
	while (((char *) dst)[c] != '\0')
		c++;
	if (dstsize != 0)
	{
		while (((char *) src)[i] != '\0' && i < dstsize)
		{
			((char *) dst)[c + i] = ((char *) src)[i];
			i++;
		}
		((char *) dst)[c + i] = '\0';
	}
	i = 0;
	while (((char *) src)[i] != '\0')
		i++;
	return (c + i);
}
/*
#include<stdio.h>

int	main(void)
{
	char	src[] = "hola mundo";
	char	dst[30];
	int		dstsize;

	dstsize = 4;
	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%lu\n", strlcat(dst, src, dstsize));
	return (0);
}
*/
