/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:13:13 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/23 13:52:53 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	while (power >= 1)
	{	
		result *= nb;
		power--;
	}	
	return (result);
}
/*
#include<stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 3;
	printf("%d",ft_iterative_power(nb, power));
	return (0);
}
*/
