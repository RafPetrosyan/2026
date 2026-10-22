/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:57:30 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/17 17:08:33 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int main()
{
	int a = 17;
	int b = 2;
	int c;
	int d;
	ft_div_mod(a, b, &c, &d);
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
}
*/
