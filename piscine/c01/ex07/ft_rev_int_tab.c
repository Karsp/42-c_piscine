/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:48:12 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/13 16:33:03 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count <= (size / 2))
	{
		temp = tab[count];
		tab[count] = tab[size - count];
		tab[size - count] = temp;
		count++;
	}
}
