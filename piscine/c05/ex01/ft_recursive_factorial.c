/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:01:40 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/23 13:48:04 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb >= 0)
		return (1);
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	int nb;

	nb = 5;
	printf("%d",ft_recursive_factorial(nb));
	return (0);
}
*/
