/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:18:44 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/22 18:29:37 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		++i;
	}
	write(1, "\n", 1);
}

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
			count++;
	}
	return (output);
}

void	ft_sort_params(char **tab, int size)
{
	int		count_a;
	char	*temp;

	count_a = 1;
	while (count_a < size - 1)
	{
		if (ft_strcmp(tab[count_a], tab[count_a + 1]) > 0)
		{
			temp = tab[count_a];
			tab[count_a] = tab[count_a + 1];
			tab[count_a + 1] = temp;
			count_a = 0;
		}
		count_a++;
	}
	count_a = 1;
	while (count_a < size)
	{
		ft_putstr(tab[count_a]);
		++count_a;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argv, argc);
	return (0);
}
