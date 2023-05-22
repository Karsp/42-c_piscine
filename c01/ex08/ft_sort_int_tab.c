/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:55:28 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/13 19:30:32 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count_a;
	int	count_b;
	int	temp;

	count_a = 0;
	count_b = 0;
	while (count_b <= size)
	{
		while (count_a <= size - 1)
		{
			if (tab[count_a] > tab[count_a + 1])
			{
				temp = tab[count_a];
				tab[count_a] = tab[count_a +1];
				tab[count_a + 1] = temp;
			}
			count_a++;
		}
		count_b++;
		count_a = 0;
	}
}
