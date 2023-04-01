/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:25:15 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/01 19:34:51 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
//A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros
// el índice de cada carácter dentro de ’s’ y el propio carácter. 
// Genera una nueva string con el resultado del uso sucesivo de ’f’.
//Return:  La string creada tras el correcto uso de ’f’ sobre cada carácter. 
//  NULL si falla la reserva de memoria.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		c;
	char	*dst;
	int		len;

	c = 0;
	len = ft_strlen(s);
	dst = (char *) ft_calloc(len + 1, 1);
	if (!dst)
		return (free(dst), NULL);
	while (s[c] != '\0')
	{
		dst[c] = f(c, s[c]);
		c++;
	}
	return (dst);
}
/*
char	my_toupper(unsigned int i, char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int	main(void)
{
	char    *s[] = "Vive en una piña debajo del mar";

	printf("%s\n", ft_strmapi(s, ft_strrchr(s, i)));
	return (0);	
}
*/
