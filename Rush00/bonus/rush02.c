/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arandrea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 08:49:49 by arandrea          #+#    #+#             */
/*   Updated: 2026/10/18 23:28:58 by narabrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_symb_for_pos_02(int i, int j, int x, int y)
{
	if (i == 1 || i == x || j == 1 || j == y)
	{
		if (j == 1 && (i == 1 || i == x))
			ft_putchar('A');
		else if (j == y && (i == 1 || i == x))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	rush02(int x, int y)
{
	int	j;
	int	i;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			print_symb_for_pos_02(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
