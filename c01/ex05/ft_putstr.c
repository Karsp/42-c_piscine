/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:16:55 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/13 19:34:50 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0' )
	{
		write(1, &str[count], 1);
		count++;
	}
}
/*
int	main(void)
{
	char str[50] = "hola";

	ft_putstr(str);
	return (0);
}*/
