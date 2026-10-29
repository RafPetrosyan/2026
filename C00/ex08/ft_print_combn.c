/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:42:26 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/18 12:10:33 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_first(int n)
{
	int	first;
	int	i;

	i = 0;
	first = 0;
	while (i < n)
	{
		first = first * 10 + i;
		++i;
	}
	return (first);
}

int	ft_last(int n)
{
	int	last;
	int	i;

	i = 0;
	last = 0;
	while (i < n)
	{
		last = last * 10 + 10 - n + i;
		++i;
	}
	return (last);
}

void	ft_my_putnbr(int nb)
{
	char	c;

	if (nb > 9)
	{
		ft_my_putnbr(nb / 10);
	}
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	ft_check(int n)
{
	int	t;

	while (n > 9)
	{
		t = n % 10;
		if (t <= n / 10 % 10)
			return (0);
		n /= 10;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	t_0;
	int	i;
	int	first;
	int	last;

	t_0 = ft_last(n - 1);
	first = ft_first(n);
	last = ft_last(n);
	i = first;
	while (i <= last)
	{
		if (ft_check(i))
		{
			if (i != first)
				write(1, ", ", 2);
			if (i <= t_0 && n != 1)
				write(1, "0", 1);
			ft_my_putnbr(i);
		}
		++i;
	}
	write(1, "\n", 1);
}

/*
#include <stdio.h>
int main()
{
	ft_print_combn(9);
}
*/
