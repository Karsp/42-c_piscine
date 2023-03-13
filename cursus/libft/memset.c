/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:59:00 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/12 21:23:19 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *b, int c, int len)
{
	unsigned char	value;
	int				count;
	char	*ptr;

	ptr = b;
	value = c;
	count = 0;
	while (ptr[count] != '\0' && count < len)
	{
		ptr[count] = value;
		count++;
	}
	return (b);
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
