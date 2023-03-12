/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:59:00 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/12 20:42:46 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int value, int size)
{
	unsigned char	c;
	int				count;
	char	*ptr;

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

	printf("%s\n", ft_memset(str, '-', 3));
	printf("%s\n", memset(str, '-', 3));
	return (0);
}
*/
