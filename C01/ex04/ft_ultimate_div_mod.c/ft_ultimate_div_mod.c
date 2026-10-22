/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:19:33 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/17 21:00:11 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;

	d = *a;
	*a = d / *b;
	*b = d % *b;
}

/*
#include <stdio.h>
int main()
{
	int a = 11;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d",a, b);

}
*/