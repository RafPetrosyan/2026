/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:12:52 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/19 21:01:27 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);		
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str != 0 && ft_isspace(str[i]))
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		++i;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		++i;
	}
	return (sign * result);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	printf("%d", ft_atoi(argv[1]));
}
*/
