/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:49:15 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/27 15:57:18 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (s1[i] - s2[i]);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	char a[] = "a";
	char b[] = "\200hello";
	printf("my = %d\n", ft_strcmp(a, b));
	printf("original = %d", strcmp(a, b));
}
*/
