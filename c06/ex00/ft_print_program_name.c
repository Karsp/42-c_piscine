/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:55:49 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/21 19:04:00 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	if (argc >= 1)
	{
		while (argv[0][count] != '\0')
		{
			write(1, &argv[0][count], 1);
			count++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
