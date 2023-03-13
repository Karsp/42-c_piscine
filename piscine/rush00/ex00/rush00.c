/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenmunoz- <jenmunoz@student.42madrid.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 21:10:57 by jenmunoz          #+#    #+#             */
/*   Updated: 2023/02/08 15:22:55 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	function_first(int a, int line_a, int pos_a)
{
	while (line_a == 0 && pos_a == 0)
	{
		ft_putchar('o');
		++pos_a;
	}
	while (line_a == 0 && pos_a < a)
	{
		ft_putchar('-');
		++pos_a;
	}
	while (line_a == 0 && pos_a == a)
	{
		ft_putchar('o');
		++pos_a;
	}
	ft_putchar('\n');
}

void	function_middle(int a, int b, int line_a, int pos_a)
{
	while (line_a < b && pos_a == 0)
	{
		ft_putchar('|');
		++pos_a;
	}
	while (line_a < b && pos_a < a)
	{
		ft_putchar(' ');
		++pos_a;
	}
	while (line_a < b && pos_a == a)
	{
		ft_putchar('|');
		++pos_a;
	}
	ft_putchar('\n');
}

void	function_last(int a, int b, int line_a, int pos_a)
{
	while (line_a == b && pos_a == 0)
	{
		ft_putchar('o');
		++pos_a;
	}
	while (line_a == b && pos_a < a)
	{
		ft_putchar('-');
		++pos_a;
	}
	while (line_a == b && pos_a == a)
	{
		ft_putchar('o');
		++pos_a;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;
	int	pos;

	line = 0;
	pos = 0;
	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		--y;
		--x;
		function_first(x, line, pos);
		++line;
		while (line < y)
		{
			function_middle(x, y, line, pos);
			++line;
		}	
		function_last(x, y, line, pos);
	}
}
