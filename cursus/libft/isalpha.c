/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:13:26 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/09 19:04:56 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(unsigned char c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	else
		return (0);
}
/*
 #include<unistd.h>
#include<stdio.h>
#include<ctype.h>

int	main(void)
{
	char	c;
	
	c = 123;
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return (0);
}
*/
