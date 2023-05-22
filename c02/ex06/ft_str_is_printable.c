/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrd.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:19:20 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 02:30:17 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	cnt;
	int	check_prntable;
	int	output;

	cnt = 0;
	check_prntable = 0;
	output = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 32 && str[cnt] <= 126)
		{
			check_prntable++;
		}
			cnt++;
	}
	if (cnt == check_prntable || str[0] == '\0')
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

    output = ft_str_is_printable(str);
    write(1, &output, 1);
    return (0);
}
*/
