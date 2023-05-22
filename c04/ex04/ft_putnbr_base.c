/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:51:01 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/22 20:25:43 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int		length;
	int		bascnt;
	char	*bascpy;

	length = 0;
	bascpy = base;
	while (base[length] != '\0')
	{
		if (base[length] == '-' || base[length] == '+')
			return (0);
		bascnt = length + 1;
		while (bascpy[bascnt] != '\0')
		{
			if (base[length] == bascpy[bascnt])
				return (0);
			bascnt++;
		}
			length++;
	}
	if (length > 1)
		return (length);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				basln;

	basln = check_base(base);
	if (basln != 0)
	{
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			nbr *= -1;
			nbr --;
		}
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr < basln)
			ft_putchar(base[nbr]);
		else
		{
			ft_putnbr_base(nbr / basln, base);
			ft_putnbr_base(nbr % basln, base);
		}
	}
}
/*
int	main(void)
{
	char	*dicc;
	int		n;

	n = 22;
	dicc = "0123456789abcdef";
	ft_putnbr_base(n, dicc);
	return (0);
}
*/
