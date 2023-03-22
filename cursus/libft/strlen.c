/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:44:19 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/22 19:20:06 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (((char *) s)[count] != '\0')
		count++;
	return (count);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	str[] = "21221 Hola";

	printf("%lu\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
	return (0);
}
*/
