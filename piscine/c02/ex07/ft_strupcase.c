/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madridcom>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:30:15 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 02:31:18 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] > 96 && str[cnt] < 123)
		{
			str[cnt] = str[cnt] - 32;
		}
			cnt++;
	}
	return (str);
}
/*
int    main(void)
{
    char	str[5] = "qWeW";
   
    ft_strupcase(str);
	int	cnt;
	cnt = 0;
	while (str[cnt] != '\0')
	{
		write(1, &str[cnt], 1);
		cnt++;
	}
    return (0);
}
*/
