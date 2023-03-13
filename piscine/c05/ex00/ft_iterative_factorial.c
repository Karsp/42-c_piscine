/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:52:19 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/23 13:46:10 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	count;

	count = nb;
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	else if (nb >= 2)
	{
		while (count > 1)
		{
			nb *= --count;
		}
	}
	return (nb);
}
/*
#include<stdio.h>

int	main(void)
{
	int nb;

	nb = 5;
	printf("%d",ft_iterative_factorial(nb));
	return (0);
}
*/
