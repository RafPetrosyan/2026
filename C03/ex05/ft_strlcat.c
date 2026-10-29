/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:00:25 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/27 16:01:37 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_dest;
	unsigned int	l_src;
	unsigned int	i;

	i = 0;
	l_dest = 0;
	l_src = 0;
	while (dest[l_dest] != '\0')
		++l_dest;
	while (src[l_src] != '\0')
		++l_src;
	if (size < l_dest)
		return (l_dest + l_src);
	while (src[i] != '\0' && l_dest + i + 1 < size)
	{
		dest[l_dest + i] = src[i];
		++i;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	char dest[] = "a\0fds\0\0\0\0\0\0\0\0";
	printf("my = \"%d\", dest = \"%s\"\n", 
ft_strlcat(dest2, argv[1], atoi(argv[2])), dest2);
}
*/
