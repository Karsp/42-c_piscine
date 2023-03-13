/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:19:07 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:09:37 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_bzero(char *s, size_t n)
{
	size_t	count;

	count = 0;
	if (n != 0)
	{
		while (s[count] != '\0' && count < n)
		{
			s[count] = '\0';
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

	size = 4;
	ft_bzero(str, size);
//	bzero(str, size);
	printf("%s\n", str);	
	return (0);
}
*/
