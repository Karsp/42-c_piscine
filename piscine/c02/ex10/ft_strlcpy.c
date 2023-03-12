/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:32:09 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 03:12:51 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	count = 0;
	if (size != 0)
	{
		while (src[count] != '\0' && count < size - 1)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (index);
}
/*
int	main(void)
{
	char src[] = "hola";
	char dst[3];

	ft_strlcpy(dst, src, 3);
	return 0;
}
*/
