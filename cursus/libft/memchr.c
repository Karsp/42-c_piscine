/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:43:40 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/13 19:10:50 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				count;

	count = 0;
	while (((char *) s)[count] != '\0' && count < n)
	{
		if (((char *) s)[count] == ((unsigned char) c))
			return (&((char *) s)[count]);
		count++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	s[] = "Como mola";
	int		c;
	int		n;

	c =111; 
	n = 3;
	printf("%s\n", ft_memchr(s, c, n));
	printf("%s\n", memchr(s, c, n));
	return (0);
}
*/
