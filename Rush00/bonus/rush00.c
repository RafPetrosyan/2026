/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arandrea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 08:49:49 by arandrea          #+#    #+#             */
/*   Updated: 2026/10/18 21:26:30 by narabrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_symb_for_pos_00(int i, int j, int x, int y)
{
	if (i == 1 || i == x || j == 1 || j == y)
	{
		if ((i == 1 || i == x) && (j == 1 || j == y))
			ft_putchar('o');
		else if (j == 1 || j == y)
			ft_putchar('-');
		else
			ft_putchar('|');
	}
	else
		ft_putchar(' ');
}

void	rush00(int x, int y)
{
	int	j;
	int	i;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			print_symb_for_pos_00(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
