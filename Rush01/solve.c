/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 20:10:51 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/25 20:48:30 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_left_rule(int x, int y, char **matrix);
int		check_right_rule(int x, int y, char **matrix);
int		check_top_rule(int x, int y, char **matrix);
int		check_bottom_rule(int x, int y, char **matrix);
int		is_not_used(int x, int y, char **matrix);
void	print_matrix(char **matrix);

int	check_rules(int x, int y, char **matrix, int size)
{
	if (!is_not_used(x, y, matrix))
		return (0);
	if (!(check_left_rule(x, y, matrix) && check_top_rule(x, y, matrix)))
		return (0);
	if (x == size - 2)
	{
		if (!check_right_rule(x, y, matrix)
			|| (check_left_rule(x, y, matrix) != matrix[y][0] - '0'))
			return (0);
	}
	if (y == size - 2)
	{
		if ((check_bottom_rule(x, y, matrix) != matrix[size - 1][x] - '0')
			|| (check_top_rule(x, y, matrix) != matrix[0][x] - '0'))
			return (0);
	}
	return (1);
}

void	solve(int y, int x, char **matrix, int *stop)
{
	char	value;

	value = '1';
	while (value <= matrix[0][0] - 2 + '0')
	{
		matrix[y][x] = value;
		if (check_rules(x, y, matrix, matrix[0][0]) == 1)
		{
			if (y == matrix[0][0] - 2 && x == matrix[0][0] - 2)
			{
				*stop = 1;
				print_matrix(matrix);
			}
			else if (x != matrix[0][0] - 2)
				solve(y, x + 1, matrix, stop);
			else if (x == matrix[0][0] - 2)
				solve(y + 1, 1, matrix, stop);
		}
		if (*stop == 1)
			return ;
		matrix[y][x] = '0';
		++value;
	}
}
