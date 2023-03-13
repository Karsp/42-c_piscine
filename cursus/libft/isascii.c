/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:33:25 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:10:07 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isascii(int c)
{
	unsigned char	cc;

	cc = c;
	if (cc >= 0 && cc <= 127)
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
#include<ctype.h>

int	main(void)
{
	unsigned char	c;
	
	c = 200;
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	return (0);
}
*/
