/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:04:29 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/21 19:17:40 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	main(int argc, char **argv)
{
	int	countarg;
	int	countstr;

	countarg = 1;
	countstr = 0;
	if (argc > 1)
	{
		while (countarg < argc)
		{
			while (argv[countarg][countstr] != '\0')
			{
				write(1, &argv[countarg][countstr], 1);
				countstr++;
			}
			write(1, "\n", 1);
			countstr = 0;
			countarg++;
		}
	}
	return (0);
}
