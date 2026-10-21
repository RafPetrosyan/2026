/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:36:15 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/21 14:54:32 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(unsigned char *s, unsigned int *i, unsigned int size)
{
	unsigned char	t;
	
	while (i < size && (i % 16 != 15))
	{
		if (s[*i] >= 0 && s[*i] <= 31 || s[*i] == 127)
			write(1, &s[*i], 1);
		if (s[*i] == )
		++i;
	}
}

void	ft_print_str_hex(unsigned char *s, unsigned int i, unsigned int size)
{
	int		j;
	unsigned char	t;
	
	j = i;
	while (j < size)
	{
		if (j % 2 == 1)
			write(1, " ", 1);
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
	}
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
	int	j;

	j = 0;
	i = 0;
	str = (unsigned char *)addr;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			ft_print_addr_hex((unsigned long)&str[i], &j);
			write(1, ": ", 2);
			ft_print_str_hex(str, i, size);

			
		}
	}
	return addr;
}

#include <stdio.h>

int	main()
{
	char a;
	int	i;
	
	i = 0;
	unsigned long b = (unsigned long)(&a);
	printf("%p\n", &a);
	ft_print_addr_hex(b, &i);
	return 0;
}
