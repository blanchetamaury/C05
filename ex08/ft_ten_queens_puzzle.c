/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:00:45 by amblanch          #+#    #+#             */
/*   Updated: 2024/07/25 14:27:33 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int grid[10])
{
	int		i;
	char	b;

	i = 0;
	while (i < 10)
	{
		b = grid[i] + '0';
		write(1, &b, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check(int grid[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (grid[i] == col)
			return (0);
		if (grid[i] - i == col - row)
			return (0);
		if (grid[i] + i == col + row)
			return (0);
		i++;
	}
	return (1);
}

int	backtracking(int grid[10], int row)
{
	int	col;

	col = 0;
	if (row == 10)
	{
		print_array(grid);
		return (1);
	}
	while (col < 10)
	{
		if (check(grid, row, col))
		{
			grid[row] = col;
			backtracking(grid, row + 1);
			grid[row] = -1;
		}
		col++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		grid[i] = -1;
		i++;
	}
	backtracking(grid, 0);
	return (724);
}
