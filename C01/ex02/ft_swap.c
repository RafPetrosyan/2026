/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:47:10 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/17 16:55:23 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int main()
{
	int a=5;
	int b=6;
	printf("%d", a);
	printf("%d", b);
	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
}
*/
