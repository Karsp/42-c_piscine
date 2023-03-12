/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:14:06 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/19 13:16:27 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	unsigned int	output;

	output = 0;
	count = 0;
	if (n > 0)
	{
		while ((s1[count] != '\0' || s2[count] != '\0') && count < n)
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
	}
	return (output);
}
/*
#include<stdio.h>
int main()
{
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abCd";
  int result;

  result = ft_strncmp(str1, str2, 2);
  printf("strcmp(str1, str2) = %d\n", result);

  result = ft_strncmp(str1, str3, 4);
  printf("strcmp(str1, str3) = %d\n", result);

  return 0;
}
*/
