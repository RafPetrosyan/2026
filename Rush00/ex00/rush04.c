/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arandrea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 08:49:49 by arandrea          #+#    #+#             */
/*   Updated: 2026/10/18 18:53:56 by arandrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_symb_for_pos(int i, int j, int x, int y)
{
	if (i == 1 || i == x || j == 1 || j == y)
	{
		if ((i == 1 && j == 1) || (i == x && j == y && y > 1 && x != 1))
			ft_putchar('A');
		else if ((i == 1 && j == y) || (i == x && j == 1))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	j;
	int	i;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			print_symb_for_pos(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
