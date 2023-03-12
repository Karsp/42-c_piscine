/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:00:22 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/20 12:01:45 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	countsrc;
	int	countdest;

	countsrc = 0;
	countdest = 0;
	while (dest[countdest] != '\0')
	{
		countdest++;
	}
	while (src[countsrc] != '\0')
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
   
   ft_strcat(str1, str2);
   puts(str1);
   puts(str2);
   return 0;
}
*/
