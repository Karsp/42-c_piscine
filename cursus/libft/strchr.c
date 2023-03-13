/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:35:47 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:27:31 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		count;

	count = 0;
	while (((char *) s)[count] != '\0')
	{
		if (((char *) s)[count] == ((char) c))
			return (&((char *) s)[count]);
		count++;
	}
	if (c == '\0')
		return (&((char *) s)[count]);
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	str[] = "hola mundo";
	int	c;

	c = 98;
	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));
	return (0);
}
*/
