/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:53:27 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/23 17:22:28 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (count <= nb)
	{
		if (count * count == nb)
			return (count);
		count++;
	}
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	int	nb;

	nb = 4;
	printf("%d", ft_sqrt(nb));
	return (0);
}
*/
