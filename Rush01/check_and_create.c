/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:09:47 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/25 21:32:16 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	check_input(char *input)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if ((input[i] < '1') || (input[i] > '9'))
				return (0);
			count++;
		}
		else
		{
			if (input[i] != ' ')
				return (0);
			if (input[i + 1] == '\0')
				return (0);
		}
		i++;
	}
	if (count % 4)
		return (0);
	return (count / 4);
}

void	set_values_as_0(char **matrix, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			matrix[i][j] = '0';
			j++;
		}
		i++;
	}
	matrix[0][0] = size;
}

int	set_hints(char **matrix, int size, char *hints)
{
	int	i;

	i = 0;
	set_values_as_0(matrix, size + 2);
	while (hints[i] != '\0')
	{
		if ((hints[i] != ' ') && (hints[i] > size + '0'))
			return (0);
		i++;
	}
	i = 0;
	while (i < size)
	{
		matrix[0][i + 1] = hints[2 * i];
		matrix[size + 1][i + 1] = hints[2 * (size + i)];
		matrix[i + 1][0] = hints[2 * (2 * size + i)];
		matrix[i + 1][size + 1] = hints[2 * (3 * size + i)];
		i++;
	}
	return (1);
}

void	print_matrix(char **matrix)
{
	int	i;
	int	j;

	i = 1;
	while (i < (int)(matrix[0][0] - 1))
	{
		j = 1;
		while (j < (int)(matrix[0][0] - 1))
		{
			write(1, &matrix[i][j], 1);
			if (j != (int)(matrix[0][0] - 2))
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

char	**create_matrix(int size)
{
	char	**matrix;
	int		i;

	if (size <= 0)
		return (NULL);
	matrix = malloc(size * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		matrix[i] = malloc(size * sizeof(char));
		if (matrix[i] == NULL)
		{
			while (i > 0)
				free(matrix[--i]);
			free(matrix);
			return (NULL);
		}
		i++;
	}
	return (matrix);
}
