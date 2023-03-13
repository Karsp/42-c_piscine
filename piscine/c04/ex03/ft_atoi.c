/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:41:43 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/23 15:44:13 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_atoi(char *str)
{
	int	c;
	int	minus;
	int	result;

	minus = 1;
	result = 0;
	c = 0;
	while ((str[c] > 8 && str[c] < 14) || str[c] == ' ')
			c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			minus *= -1;
		c++;
	}
	while (str[c] != '\0')
	{
		if (str[c] >= '0' && str[c] <= '9')
			result = result * 10 + (str[c] - '0');
		else
			break ;
		c++;
	}
	return (result * minus);
}
/*
#include<stdlib.h>
#include<stdio.h>

int	main(void)
{
	char	*str;

	str = "  ---+--+ 1234ab567";
	printf("%d", ft_atoi(str));
	return (0);
}
*/
