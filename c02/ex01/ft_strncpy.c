/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <daviles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:10:02 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/18 23:42:00 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;
	int				end;

	count = 0;
	end = 0;
	while (count < n)
	{
		if (src[count] != '\0' && end == 0)
		{
			dest[count] = src[count];
		}
		else
		{
			dest[count] = '\0';
			end++;
		}
		count++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "hola";
	char dst[5];

	ft_strncpy(dst, src, 5);
	return 0;
}
*/
