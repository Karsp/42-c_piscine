/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:50:03 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/20 19:21:45 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_str_len(char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	countsrc;
	unsigned int	countdest;
	unsigned int	dstlen;
	unsigned int	end;

	countsrc = 0;
	dstlen = ft_str_len(dest);
	countdest = dstlen;
	end = 0;
	if (size == 0)
		return (ft_str_len(src));
	if (size > dest) //corregir
		return (dstlen + ft_str_len(src));
	while (countsrc < size)
	{
		if (src[countsrc] != '\0' && end == 0)
			dest[countdest + countsrc] = src[countsrc];
		else
		{
			dest[countdest + countsrc] = '\0';
			end++;
		}
		countsrc++;
	}
	dest[countdest + countsrc] = '\0';
	return (dstlen + size);
}
/*
int main() 
{
   char str1[100] = "This is ", str2[] = "programiz.com";
   unsigned int result;

   result = ft_strlcat(str1, str2, 3);
   printf("%d",result);
   return 0;
}


 //  result = strlcat(str1, str2, 3); src + size
 //  result = strlcat(str1, str2, 10); src + dest
//  	result = strlcat(str1, str2, 0); src
*/
