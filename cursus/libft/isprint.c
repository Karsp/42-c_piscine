/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:38:00 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:10:39 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isprint(int c)
{
	unsigned char	cc;

	cc = c;
	if (cc >= 32 && cc <= 126)
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

	c = 31;
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	return (0);
}
*/
