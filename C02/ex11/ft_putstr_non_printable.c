/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:34:27 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/26 17:15:14 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_non_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (1);
	return (0);
}

void	ft_print_hex(char a)
{
	char			t;
	unsigned char	c;

	c = (unsigned char)a;
	write(1, "\\", 1);
	if (c / 16 > 9)
		t = c / 16 + 87;
	else
		t = c / 16 + '0';
	write(1, &t, 1);
	if (c % 16 > 9)
		t = c % 16 + 87;
	else
		t = c % 16 + '0';
	write(1, &t, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check_non_printable(str[i]) == 1)
			ft_print_hex(str[i]);
		else
			write(1, &str[i], 1);
		++i;
	}
}

/*
int	main()
{
	ft_putstr_non_printable("hello\200nashxarh");
}
*/
