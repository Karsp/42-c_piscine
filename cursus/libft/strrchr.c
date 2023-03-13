/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:55:12 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:26:05 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	int		found;

	count = 0;
	found = 0;
	while (((char *) s)[count] != '\0')
	{
		if (((char *) s)[count] == ((char) c))
			found = count;
		count++;
	}
	if (((char) c) == '\0')
		return (&((char *) s)[count]);
	if (found != 0)
		return (&((char *) s)[found]);
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	str[] = "hola mundo";
	int		c;

	c = 97;
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
	return (0);
}
*/
