/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:01:26 by daviles-          #+#    #+#             */
/*   Updated: 2023/02/13 00:02:49 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void init_out_matrix(int **out_matrix)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= 3)
	{
		while (y <= 3)
		{
			out_matrix[x][y] = '0';
			++y;
		}
		x++;
		y = 0;
	}
}

void	print_inrow(int **out_matrix, int running_row, int n1, int n2, int n3, int n4)
{
		out_matrix [running_row][0] = n1;
		out_matrix [running_row][1] = n2;
		out_matrix [running_row][2] = n3;
		out_matrix [running_row][3] = n4;
}

void	print_incol(int **out_matrix, int running_col, int n1, int n2, int n3, int n4)
{
		out_matrix [0][running_col] = n1;
		out_matrix [1][running_col] = n2;
		out_matrix [2][running_col] = n3;
		out_matrix [3][running_col] = n4;
}

void	checkn_rowright(int **out_matrix, int running_row, int check_number, int *position)
{	
	int col_n;

	col_n = 0;
	*position=5;
	while (col_n < 4)
	{
		if (out_matrix[running_row][col_n] == check_number)
		{
			*position = col_n;
		}
		col_n++;
	}
}
void	check_1and4_down(int **out_matrix, int parameter_count, int running_row, int col, char *parameters)
{
	if (parameters [parameter_count] == '1')
	{
		out_matrix [running_row][col] = 4;
	}
	if (parameters [parameter_count] == '4')
	{
		out_matrix [running_row][col] = '1';
		out_matrix [running_row + 1][col] = '2';
		out_matrix [running_row + 2][col] = '3';
		out_matrix [running_row + 3][col] = '4';
	}
}

void	check_1and4_up(int **out_matrix, int parameter_count, int running_row, int col, char *parameters)
{
	if (parameters [parameter_count] == '1')
	{
		out_matrix [running_row][col] = '4';
	}
	if (parameters [parameter_count] == '4')
	{
		out_matrix [running_row][col] = '1';
		out_matrix [running_row - 1][col] = '2';
		out_matrix [running_row - 2][col] = '3';
		out_matrix [running_row - 3][col] = '4';
	}
}

void	check_3_down(int **out_matrix, int parameter_count, int running_row, int col, char *parameters)
{
   int *ptr_position;

	ptr_position = malloc(1 * sizeof(int)); 
	if (parameters [parameter_count] == '3')
	{
		checkn_rowright(out_matrix, running_row, 1, ptr_position);
		if (ptr_position[0] == 1)
		{
			print_inrow(out_matrix,running_row, 2, 1, 3, 4);
		}
		if (ptr_position[0] == 2)
		{
			print_inrow(out_matrix,running_row, 2, 3, 1, 4);
		}
		if (ptr_position[0] == 3)
		{
			print_inrow(out_matrix,running_row, 2, 3, 4, 1);
		}
	}
}

void	check_1and4_right(int **out_matrix, int parameter_count, int running_col, int row, char *parameters)
{
	if (parameters [parameter_count] == '1')
	{
		out_matrix [row][running_col] = '4';
	}
	if (parameters [parameter_count] == '4')
	{
		out_matrix [row][running_col] = '1';
		out_matrix [row][running_col + 1] = '2';
		out_matrix [row][running_col + 2] = '3';
		out_matrix [row][running_col + 3] = '4';
	}
}

void	check_1and4_left(int **out_matrix, int parameter_count, int running_col, int row, char *parameters)
{
	if (parameters [parameter_count] == '1')
	{
		out_matrix [row][running_col] = '4';
	}
	if (parameters [parameter_count] == '4')
	{
		out_matrix [row][running_col] = '1';
		out_matrix [row][running_col - 1] = '2';
		out_matrix [row][running_col - 2] = '3';
		out_matrix [row][running_col - 3] = '4';
	}
}


void	run_row(int **out_matrix, int running_col, char *parameters)
{
	int parameter_count;
	int row;

	parameter_count = 16;
	row = 0;
	if (running_col == 0)
	{
		while (parameter_count < 23)
		{
			check_1and4_right(out_matrix, parameter_count, running_col, row, parameters);
			check_3_down(out_matrix, parameter_count, row, running_col, parameters);
			parameter_count = parameter_count + 2;
			row++;
		}
	}
	if (running_col == 3)
	{
		row = 3;
		parameter_count = 24;
		while (parameter_count < 31)
		{
			check_1and4_left(out_matrix, parameter_count, running_col, row, parameters);
			check_3_down(out_matrix, parameter_count, row, running_col, parameters);
			parameter_count = parameter_count + 2;
			row++;
		}
	}
}

void	run_col(int **out_matrix, int running_row, char *parameters)
{
	int parameter_count;
	int col;
	int *ptr_position;

	ptr_position = malloc(1 * sizeof(int)); 
	parameter_count = 0;
	col = 0;
	if (running_row == 0)
	{
		while (parameter_count < 7)
		{
			check_1and4_down(out_matrix, parameter_count, running_row, col, parameters);
			check_3_down(out_matrix, parameter_count, running_row, col, parameters);
			parameter_count = parameter_count + 2;
			col++;
		}
	}
	if (running_row == 3)
	{
		col = 0;
		parameter_count = 8;
		while (parameter_count < 13)
		{
			check_1and4_up(out_matrix, parameter_count, running_row, col, parameters);
			check_3_down(out_matrix, parameter_count, running_row, col, parameters);
			parameter_count = parameter_count + 2;
			col++;
		}
	}
}

void	ft_putchar(int out_n)
{
	write(1, &out_n, 1);
}

void	print_square(int **out_matrix)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= 3)
	{
		while (y <= 3)
		{
			ft_putchar(out_matrix[x][y]);
			++y;
		}
		x++;
		y = 0;
		write(1, "\n", 1);
	}

}

int	main(int argc, char *argv[])
{
	int cols;
	int rows;
	int count;
	char arguments[] =  "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"; 

	cols = 4;
	rows = 4;
	count = 0;
	int **out_matrix = (int **) malloc(rows * sizeof(int*));

	while(count < cols)
	{
		out_matrix[count] =  (int*)malloc(cols * sizeof(int));
		count++;
	}
	init_out_matrix(out_matrix);
	int counter_row;
	int counter_col;

	counter_row = 0;
	counter_col = 0;
	while (counter_row == 0 || counter_row == 3)
	{
		run_col(out_matrix, counter_row, arguments);
		counter_row = counter_row + 3;
	}
	while (counter_col == 0 || counter_col == 3)
	{
		run_row(out_matrix, counter_col, arguments);
		counter_col = counter_col + 3;
	}
	counter_row = 0;
	counter_col = 0;

	while (counter_row <= 3)
	{
		run_col(out_matrix, counter_row, arguments);
		counter_row++;
	}

	print_square(out_matrix);
   return 0;
}

