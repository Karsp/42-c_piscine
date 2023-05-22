/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:44:31 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/18 23:33:36 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcpy(char *dest, char *src)
{
	int	count;
	int	strlen;

	count = 0;
	strlen = ft_str_len(src);
	while (count <= strlen)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
/*
int	main(void)
{
	char str[] = "hola";
	char dst[] = "lijs"; 

	*ft_strcpy(dst, str);
	return 0;
}
*/
