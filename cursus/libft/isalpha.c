/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:13:26 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/22 20:47:54 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isalpha(int c)
{
	int	cc;

	cc = c;
	if ((cc >= 'A' && cc <= 'Z') || (cc >= 'a' && cc <= 'z'))
		return (1);
	else
		return (0);
}
/*
 #include<unistd.h>
#include<stdio.h>
#include<ctype.h>

int	main(void)
{
	char	c;
	
	c = 70;
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return (0);
}
*/
