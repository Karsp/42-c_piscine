/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:26:39 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/23 15:03:45 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb <= 1)
		return (0);
	while ((long int)count * count <= (long int)nb)
		if (nb % count++ == 0)
			return (0);
	return (1);
}
/*
#include<stdio.h>

int	main(void)
{
	int	nb;

	nb = 2;
	printf("%d", ft_is_prime(nb));
	return (0);
}
*/
