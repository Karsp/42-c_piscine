/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 03:56:02 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/13 15:51:32 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	condition(int a)
{
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putchar(a / 10 + '0');
				ft_putchar(a % 10 + '0');
				write(1, " ", 1);
				ft_putchar(b / 10 + '0');
				ft_putchar(b % 10 + '0');
				condition(a);
			}
			b++;
		}
		a++;
		b = a +1;
	}
}
