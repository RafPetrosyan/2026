/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:33:55 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/26 17:10:48 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha_or_number(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || (!ft_char_is_alpha_or_number(str[i - 1])))
		{
			if (ft_char_is_lowercase(str[i]))
				str[i] -= 32;
		}
		else if ((i != 0) && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	char str[] = " S";
	ft_strcapitalize(argv[1]);
	printf("%s", argv[1]);
}
*/