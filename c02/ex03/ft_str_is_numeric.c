/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:58:45 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 02:29:15 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	cnt;
	int	check_num;
	int	output;

	cnt = 0;
	check_num = 0;
	output = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] > 47 && str[cnt] < 58)
		{
			check_num++;
		}
			cnt++;
	}
	if (cnt == check_num)
	{
		output = 1;
	}
	return (output);
}
/*
int	main(void)
{
	char	str[3] = "123";
	int	output;

	output = ft_str_is_numeric(str);
	write(1, &output, 1);
	return (0);
}
*/
