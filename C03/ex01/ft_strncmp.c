/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:59:49 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/22 21:05:58 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	int c = 2;
	char a[] = "";
	char b[] = "hello";
	printf("my = %d\n", ft_strncmp(a, b, c));
	printf("original = %d", strncmp(a, b, c));
}
*/
