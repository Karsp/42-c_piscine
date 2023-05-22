/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 03:18:37 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 13:39:10 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	countsrc;
	unsigned int	countdest;

	countsrc = 0;
	countdest = 0;
	while (dest[countdest] != '\0')
	{
		countdest++;
	}
	while (src[countsrc] != '\0' && countsrc < nb)
	{
		dest[countdest] = src[countsrc];
		countsrc++;
		countdest++;
	}
	dest[countdest] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "This is ", str2[] = "programiz.com";

   ft_strcat(str1, str2, 4);
   puts(str1);
   puts(str2);
   return 0;
}
*/
