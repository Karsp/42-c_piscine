/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:14:08 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 02:29:57 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	cnt;
	int	check_upp;
	int	output;

	cnt = 0;
	check_upp = 0;
	output = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] > 64 && str[cnt] < 91)
		{
			check_upp++;
		}
			cnt++;
	}
	if (cnt == check_upp)
	{
		output = 1;
	}
	return (output);
}
/*
int    main(void)
{
    char    str[5] = "QWEQW";
    int    output;

    output = ft_str_is_uppercase(str);
    write(1, &output, 1);
    return (0);
}
*/
