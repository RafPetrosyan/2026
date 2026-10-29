/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:33:25 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/25 20:54:19 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_input(char *input);
char	**create_matrix(int size);
int		set_hints(char **matrix, int size, char *hints);
void	solve(int y, int x, char **matrix, int *stop);

int	main(int argc, char **argv)
{
	int		size;
	char	**matrix;
	int		stop;

	stop = 0;
	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		size = check_input(argv[1]);
		if (size)
		{
			matrix = create_matrix(size + 2);
			if (set_hints(matrix, size, argv[1]))
				solve(1, 1, matrix, &stop);
			if (stop == 0)
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
