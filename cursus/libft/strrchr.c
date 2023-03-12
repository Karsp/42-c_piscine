/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:55:12 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/12 20:07:22 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int cc)
{
	char	c;
	int		count;
	int		found;

	c = cc;
	count = 0;
	found = 0;
	while (str[count] != '\0')
	{
		if (str[count] == c)
			found = count;
		count++;
	}
	if (c == '\0')
		return (&str[count]);
	if (found != 0)
		return (&str[found]);
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
