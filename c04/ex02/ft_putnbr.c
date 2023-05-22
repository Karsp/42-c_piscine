/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:33:24 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/23 16:39:12 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(int nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		write(1, "147483648", 9);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else if ((nb / 10) == 0)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + 48;
		write(1, &c, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);

}
*/
