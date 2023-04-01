/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:17:15 by daviles-          #+#    #+#             */
/*   Updated: 2023/03/30 21:48:31 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
//Reserva (utilizando malloc(3)) un array de strings resultante de separar la 
//string ’s’ en substrings utilizando el caracter ’c’ como delimitador. El 
//array debe terminar con un puntero NULL. return El array de nuevas strings 
//resulatente de la separación. NULL si falla la reserva de memoria.

static int	ft_isstart(char const *s, char c, int start)
{
	while (s[start] == c && s[start] != '\0')
		start++;
	return (start);
}

static int	ft_countwords(char const *s, char c)
{
	int		w;
	size_t	j;

	w = 1;
	j = ft_isstart(s, c, 0);
	if (j == ft_strlen(s))
		w = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			w++;
			while (s[j] == c || s[j] == '\0')
			{
				if (s[j] == '\0')
					return (--w);
				j++;
			}
		}
		else
			j++;
	}
	return (w);
}

static int	ft_lenword(char const *s, char c, int j)
{
	int	l;

	l = 0;
	while (s[j])
	{
		if (s[j] == c)
			return (l);
		l++;
		j++;
	}
	return (l);
}

static void	ft_freeall(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**str;
	int		start;
	int		len;
	int		i;

	start = 0;
	i = 0;
	if (!s)
		return (NULL);
	size = ft_countwords(s, c);
	str = (char **) ft_calloc (size + 1, sizeof(char *));
	if (!str)
		return (NULL);
	while (i < size && s[i] != '\0')
	{
		start = ft_isstart(s, c, start);
		len = ft_lenword(s, c, start);
		str[i] = ft_substr(s, start, len);
		if (!str[i])
			return (ft_freeall(str), NULL);
		start += len;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*s = "";  
	char	c;
	int		i;
	char	**ptr;

	i = 0;
	c = '\0';
	ptr = ft_split(s, c);
	while (ptr[i])
	{
		printf("%s\n",ptr[i]);
		i++;
	}
	return (0);
}
*/
