/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:16:42 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/13 15:47:30 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c <= 122)
	{
		write (1, &c, 1);
		++c;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return(0);
}
*/
