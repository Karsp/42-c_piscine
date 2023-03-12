/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:19:07 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/09 19:30:40 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(char *str, int size)
{
	int	count;

	count = 0;
	if (size != 0)
	{
		while (str[count] != '\0' && count < size)
		{
			str[count] = '\0';
			count++;
		}
	}
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	str[] = "lalolanda";
	int		size;

	size = 0;
	ft_bzero(str, size);
//	bzero(str, size);
	printf("%s\n", str);	
	return (0);
}
*/
