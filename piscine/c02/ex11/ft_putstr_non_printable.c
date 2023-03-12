/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:45:49 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/20 19:16:41 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	put_chr_to_hex(unsigned char c)
{
	char	*dicc;

	dicc = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &dicc[c / 16], 1);
	write(1, &dicc[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	count;
	unsigned char	c;

	count = 0;
	while (str[count] != '\0')
	{
		c = str[count];
		if (c < 32 || c > 126)
		{
			put_chr_to_hex(c);
			count++;
		}
		else
		{
			write(1, &c, 1);
			count++;
		}
	}
}
/*
int	main(void)
{
	char	str[] = "Coucou\ntu\r  va \ts bien";
	ft_putstr_non_printable(str);
	return (0);
}
*/
