/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:49:15 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/22 20:58:53 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1 - s2);
		++i;
	}
	return (s1[i] - s2[i])
}


/*
#include <string.h>
#include <stdio.h>

int main()
{
	char *a = 0;
	char b[] = "hello";
	printf("%d", strcmp(a, b));
}
*/
