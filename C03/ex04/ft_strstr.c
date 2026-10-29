/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:00:04 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/27 16:00:52 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
				break ;
			++j;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		++i;
	}
	return (0);
}

/*

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("original = \"%s\"\n", strstr(argv[1], argv[2]));
	printf("my = \"%s\"\n", ft_strstr(argv[1], argv[2]));
}
*/
