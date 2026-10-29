/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:59:32 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/27 15:59:42 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		++i;
	while (src[j] != 0 && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	int c = 4;
	char a1[] = "hello\0\0\0\0";
	char b1[] = "world";
	printf("original = %s\n", strncat(a1, b1, c));
	char a[] = "hello\0\0\0\0";
	char b[] = "world";
	printf("my = %s\n", ft_strncat(a, b, c));
}
*/
