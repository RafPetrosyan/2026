/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:32:19 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/22 16:32:32 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char src2[] = "Hello";
	char dest2[] = "Wo";
	ft_strncpy(dest2, src2, 3);
	printf("My: %s\n", dest2);


	char src[] = "Hello";
	char dest[] = "Wo";

	strncpy(dest, src, 3);
	strncpy(dest, src, 3);
	printf("original: %s\n", dest);

}
*/
