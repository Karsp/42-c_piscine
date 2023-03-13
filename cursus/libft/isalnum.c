/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:15:29 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:09:50 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	unsigned char	cc;

	cc = c;
	if (ft_isdigit(cc) == 1 || ft_isalpha(cc) == 1)
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
	
	c = 62;
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0);
}
*/
