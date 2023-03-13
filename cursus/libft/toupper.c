/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:20:02 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:27:45 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include<stdio.h>
#include<ctype.h>

int	main(void)
{
	int	c;

	c = 110;
	write(1, &c, 1);
//	printf("%d\n", toupper(c));
	printf("%d\n", ft_toupper(c));
	return (0);
}
*/
