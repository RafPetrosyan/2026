/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:56:11 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/19 12:42:10 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	if (tab == 0)
		return ;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		++i;
	}
}

/*
#include <stdio.h>

int main()
{
	int ar[5];

	ar[0] = 0;
	ar[1] = 1;
	ar[2] = 2;
	ar[3] = 3;
	ar[4] = 4;

	ft_rev_int_tab(ar, 5);
	printf("%d, %d, %d, %d, %d", ar[0], ar[1], ar[2], ar[3], ar[4]);
}
*/
