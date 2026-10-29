/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:58:28 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/27 15:59:24 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		++i;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	char a[] = "";
	char b[] = "world";
	printf("my = %s\n", ft_strcat(b, a));
	char a2[] = "";
	char b2[] = "world";	
	printf("original = %s", strcat(b2, a2));
}
*/
