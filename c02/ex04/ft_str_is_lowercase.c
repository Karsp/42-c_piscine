/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:08:26 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 02:29:34 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	cnt;
	int	check_low;
	int	output;

	cnt = 0;
	check_low = 0;
	output = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] > 96 && str[cnt] < 123)
		{
			check_low++;
		}
			cnt++;
	}
	if (cnt == check_low)
	{
		output = 1;
	}
	return (output);
}
/*
int    main(void)
{
    char    str[5] = "qWeWq";
    int    output;

    output = ft_str_is_lowercase(str);
    write(1, &output, 1);
    return (0);
}
*/
