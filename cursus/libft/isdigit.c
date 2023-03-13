/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:47:04 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:10:23 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isdigit(int c)
{
	unsigned char	cc;

	cc = c;
	if (cc >= '0' && cc <= '9')
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

	c = 1;
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	return (0);
}
*/
