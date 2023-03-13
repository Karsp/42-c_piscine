/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 00:07:04 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:29:20 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize != 0 && len >= dstsize)
	{
		while (src[count] != '\0' && count < dstsize)
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (len);
}
/*
#include<string.h>

int	main(void)
{
	char	src[] = "code breaker";
	char	dst[20];
	int		dstsize;

	dstsize = 4;
	printf("%lu\n", ft_strlcpy(dst, src, dstsize));
	printf("%lu\n", strlcpy(dst, src, dstsize));
	return (0);
}
*/
