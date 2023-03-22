/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:36:35 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/22 17:33:22 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*str;
	size_t		count;

	str = src;
	count = 0;
	while (str[count] != '\0' && count < n)
	{
		((char *) dst)[count] = str[count];
		count++;
	}
	return (dst);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	str[] = "me gusta madrid";
	char	dst[20];
	int		n;

	n = 8;
	printf("%s\n", ft_memcpy(dst, str, n));
	printf("%s\n", memcpy(dst, str, n));
	return (0);
}
*/
