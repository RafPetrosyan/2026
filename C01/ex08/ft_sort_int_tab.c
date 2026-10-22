/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:51:28 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/19 13:06:00 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	if (tab == 0 || size <= 1)
		return ;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			++j;
		}
		++i;
	}
}

/*
#include <stdio.h>

int main()
{
	int ar[5];

	ar[0] = 10;
	ar[1] = 5;
	ar[2] = 3;
	ar[3] = 2;
	ar[4] = 1;

	ft_sort_int_tab(ar, 2);
	printf("%d, %d, %d, %d, %d", ar[0], ar[1], ar[2], ar[3], ar[4]);
}
*/
