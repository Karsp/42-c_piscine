/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:29:42 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/09 18:35:00 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include<stdio.h>
#include<ctype.h>

int	main(void)
{
	int	c;

	c = 66;
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	return (0);
}
*/
