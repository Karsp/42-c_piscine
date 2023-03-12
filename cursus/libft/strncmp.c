/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:05:19 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/09 19:18:48 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int size)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && count < size)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (s1[count] - s2[count]);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char	s1[] = "holala";
	char	s2[] = "holalala";
	int		size = 4;

	printf("%d\n", ft_strncmp(s1, s2, size));
	printf("%d\n", strncmp(s1, s2, size));
	return (0);
}
*/
