/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:42:52 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/20 19:27:57 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
		++i;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (dest == 0 || src == 0)
		return (0);		
	while ((i < size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>

int main()
{
	char	src[] = "Barev";
	char	dest[] = "as";
	printf("%d, \"%s\", \"%s\"\n", ft_strlcpy(dest, src, 3), src, dest);
	char	src2[] = "Barev";
	char	dest2[] = "as";
	printf("%d, \"%s\", \"%s\"\n", ft_strlcpy(dest2, src2, 3), src2, dest2);

}
