/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:56:24 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 22:27:45 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] > 64 && str[cnt] < 91)
		{
			str[cnt] = str[cnt] + 32;
		}
			cnt++;
	}
	return (str);
}
/*
int    main(void)
{
    char	str[5] = "qWeW";

    ft_strlowcase(str);
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
