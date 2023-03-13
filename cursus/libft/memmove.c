/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:26:59 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:11:04 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		count;

	count = 0;
	if (src < dst)
	{
		while ((int)--len >= 0)
			((char *) dst)[len] = ((char *) src)[len];
	}
	else
	{
		while (((char *) src)[count] != '\0' && count < len)
		{
			((char *) dst)[count] = ((char *) src)[count];
			count++;
		}
	}
	return (dst);
}
/*
#include<string.h>
#include<stdio.h>

int	main(void)
{
	char	src[] = "up to you";
	char	*dst;
	int		len;

	len = 4;
	dst = src + 1;
//	printf("%s\n", ft_memmove(dst, src, len));
	printf("%s\n", memmove(dst, src, len));
	return (0);
}
*/
