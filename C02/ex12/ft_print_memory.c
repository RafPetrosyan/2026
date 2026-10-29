/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:36:15 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/22 16:35:04 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_spaces(unsigned int j, unsigned int size)
{
	if (j == size)
	{
		while (j % 16 != 15)
		{
			if (j % 2 == 1)
				write(1, " ", 1);
			write(1, "   ", 2);
			++j;
		}
		write(1, "   ", 3);
	}
}

void	ft_print_str(char *s, unsigned int *i, unsigned int size)
{
	while (*i < size)
	{
		if (!(s[*i] > 31 && s[*i] < 127))
			write(1, ".", 1);
		else
			write(1, &s[*i], 1);
		if ((*i % 16) == 15)
		{
			write(1, "\n", 1);
			++(*i);
			break ;
		}
		++(*i);
	}
	if (*i == size && (((*i - 1) % 16) != 15))
		write(1, "\n", 1);
}

void	ft_print_str_hex(unsigned char *s, unsigned int i, unsigned int size)
{
	unsigned int		j;
	unsigned char		t;

	j = i;
	while (j < size)
	{
		if (s[j] / 16 > 9)
			t = s[j] / 16 + 87;
		else
			t = s[j] / 16 + '0';
		write(1, &t, 1);
		if (s[j] % 16 > 9)
			t = s[j] % 16 + 87;
		else
			t = s[j] % 16 + '0';
		write(1, &t, 1);
		if (j % 2 == 1)
			write(1, " ", 1);
		if ((j % 16) == 15)
			break ;
		++j;
	}
	ft_print_spaces(j, size);
}

void	ft_print_addr_hex(unsigned long n, int *i)
{
	char	c;

	*i = *i + 1;
	if (n > 15)
		ft_print_addr_hex(n / 16, i);
	while ((16 - *i) > 0)
	{
		write(1, "0", 1);
		++(*i);
	}
	if (n % 16 < 10)
		c = n % 16 + '0';
	else
		c = n % 16 + 87;
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*str;
	int				j;

	if (size == 0)
		return (addr);
	i = 0;
	str = (unsigned char *)addr;
	while (i < size)
	{
		j = 0;
		if (i % 16 == 0)
		{
			ft_print_addr_hex((unsigned long)&str[i], &j);
			write(1, ": ", 2);
			ft_print_str_hex(str, i, size);
			ft_print_str((char *)str, &i, size);
		}
	}
	return (addr);
}

/*
#include <stdio.h>

int	main()
{
//	char str[] = "jsbhbhbvyecybhfb jnsrtuh";

	ft_print_memory(str, 17);
	return 0;
}
*/
