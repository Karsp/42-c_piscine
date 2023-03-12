/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 03:35:09 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 15:00:06 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	ctr;
	int	csrch;
	int	find;

	ctr = 0;
	if (to_find[ctr] == '\0')
		return (str);
	while (str[ctr] != '\0')
	{
		if (str[ctr] == to_find[0])
		{
			find = ctr;
			csrch = 0;
			while (str[ctr + csrch] == to_find[csrch] && to_find[csrch] != '\0')
			{
				csrch++;
			}
			if (to_find[csrch] == '\0')
				return (str + find);
		}
		ctr++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "buscando la palabra dia, tendria que devolde";
	char	search[] = "dia";

	printf("RESULT: %s", ft_strstr(str, search));
	return (0);
} 
*/
