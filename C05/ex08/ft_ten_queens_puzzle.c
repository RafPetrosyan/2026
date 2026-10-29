#include <unistd.h>

void	print_ans(char matric[][10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		write(1, &matric[10][i], 1);
		++i;
	}
	write(1, "\n", 1);
}

int	check_harvac_ankyun(int x, int y, char matric[][10])
{
	int	k;

	k = 1;
	while ((x - k >= 0) && (y - k >= 0))
	{
		if (matric[y - k][x - k] == 'q')
			return (0);
		++k;
	}
	k = 1;
	while ((x + k < 10) && (y - k >= 0))
	{
		if (matric[y - k][x + k] == 'q')
			return (0);
		++k;
	}
	return (1);
}

int	check_harvac_ughigh(int x, int y, char matric[][10])
{
	int	x1;
	int	y1;

	x1 = x;
	y1 = y;
	while (x1 < x)
	{
		if (matric[y][x1] == 'q')
			return (0);
		++x1;
	}
	y1 = 0;
	while (y1 < y)
	{
		if (matric[y1][x] == 'q')
			return (0);
		++y1;
	}
	return (1);
}

void	recursia(int x, int y, char matric[][10], int *count)
{
	while (x < 10 && y < 10)
	{
		if (check_harvac_ughigh(x, y, matric) && check_harvac_ankyun(x, y, matric))
		{
			matric[y][x] = 'q';
			matric[10][y] = x + '0';
			recursia(0, y + 1, matric, count);
			matric[y][x] = ' ';
			if (y == 9)
			{
				print_ans(matric);
				++(*count);
			}
			++x;
		}
		else
			++x;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		i;
	int		j;
	int		count;
	char matric[11][10];

	i = 0;
	while (i < 11)
	{
		j = 0;
		while (j < 10)
		{
			matric[i][j] = ' ';
			++j;
		}
		++i;
	}
	count = 0;
	recursia(0, 0, matric, &count);
	return (count);
}
