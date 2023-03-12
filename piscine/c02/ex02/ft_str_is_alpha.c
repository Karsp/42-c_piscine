/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:07:19 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 02:28:12 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	cnt;
	int	check_abc;
	int	output;

	cnt = 0;
	check_abc = 0;
	output = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] > 64 && str[cnt] < 91)
		{
			check_abc++;
		}
		else if (str[cnt] > 96 && str[cnt] < 123)
		{
			check_abc++;
		}
			cnt++;
	}
	if (cnt == check_abc)
	{
		output = 1;
	}
	return (output);
}
/*
int	main(void)
{
	char	str[9] = "dD1kJdasd";
	int	output;
	
	output = ft_str_is_alpha(str);
	write(1, &output, 1);
	return (0);
}
*/
