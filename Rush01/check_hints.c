/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_hints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:51:16 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/25 20:38:14 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left_rule(int x, int y, char **matrix)
{
	int	count;
	int	max;
	int	k;

	count = 1;
	k = 2;
	max = matrix[y][1];
	while (k <= x)
	{
		if (max < matrix[y][k])
		{
			max = matrix[y][k];
			++count;
		}
		if (count > matrix[y][0] - '0')
			return (0);
		++k;
	}
	return (count);
}

int	check_top_rule(int x, int y, char **matrix)
{
	int	count;
	int	max;
	int	k;

	count = 1;
	k = 2;
	max = matrix[1][x];
	while (k <= y)
	{
		if (max < matrix[k][x])
		{
			max = matrix[k][x];
			++count;
		}
		if (count > matrix[0][x] - '0')
			return (0);
		++k;
	}
	return (count);
}

int	check_right_rule(int x, int y, char **matrix)
{
	int	count;
	int	max;
	int	k;

	count = 1;
	k = x - 1;
	max = matrix[y][x];
	while (k >= 1)
	{
		if (max < matrix[y][k])
		{
			max = matrix[y][k];
			++count;
		}
		if (count > matrix[y][x + 1] - '0')
			return (0);
		--k;
	}
	if (count != matrix[y][x + 1] - '0')
		return (0);
	return (count);
}

int	check_bottom_rule(int x, int y, char **matrix)
{
	int	count;
	int	max;
	int	k;

	count = 1;
	k = y - 1;
	max = matrix[y][x];
	while (k >= 1)
	{
		if (max < matrix[k][x])
		{
			max = matrix[k][x];
			++count;
		}
		if (count > matrix[y + 1][x] - '0')
			return (0);
		--k;
	}
	return (count);
}

int	is_not_used(int x, int y, char **matrix)
{
	int	k;

	k = y - 1;
	while (k > 0)
	{
		if (matrix[k][x] == matrix[y][x])
			return (0);
		--k;
	}
	k = x - 1;
	while (k > 0)
	{
		if (matrix[y][k] == matrix[y][x])
			return (0);
		--k;
	}
	return (1);
}
