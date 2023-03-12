/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:07:08 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/17 00:57:23 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	output;

	output = 0;
	count = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			output = s1[count] - s2[count];
			return (output);
		}
		else
		{
			count++;
		}
	}
	return (output);
}
/*
#include<stdio.h>
int main() 
{
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
  int result;

  result = ft_strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  result = ft_strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n", result);

  return 0;
}
*/
