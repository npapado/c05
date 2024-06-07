#include <unistd.h>

int	is_safe(int board[10], int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < col)
	{
		j = board[i];
		if (j == row || j - i == row - col || j + i == row + col)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	print_solution(int board[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	solve(int board[10], int col, int *count)
{
	int	row;

	row = 0;
	while (row < 10)
	{
		if (is_safe(board, row, col))
		{
			board[col] = row;
			if (col == 9)
			{
				print_solution(board);
				*count += 1;
			}
			else
			{
				solve(board, col + 1, count);
			}
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	solve(board, 0, &count);
	return (count);
}
