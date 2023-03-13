/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:59:00 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:11:24 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *str, int value, size_t size)
{
	unsigned char	c;
	size_t			count;
	char			*ptr;

	ptr = str;
	c = value;
	count = 0;
	while (ptr[count] != '\0' && count < size)
	{
		ptr[count] = c;
		count++;
	}
	return (str);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	str[] = "hola mundo";

	printf("%s\n", ft_memset(str, '-', 0));
	printf("%s\n", memset(str, '-', 0));
	return (0);
}
*/
