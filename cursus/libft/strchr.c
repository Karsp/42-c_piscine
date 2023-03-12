/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:35:47 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/09 19:04:29 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int cc)
{
	char	c;
	int		count;

	count = 0;
	c = cc;
	while (str[count] != '\0')
	{
		if (str[count] == c)
			return (&str[count]);
		count++;
	}
	if (c == '\0')
		return (&str[count]);
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	str[] = "hola mundo";
	int	c;

	c = 65;
	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));
	return (0);
}
*/
