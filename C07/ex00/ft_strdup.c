/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:25:09 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/28 18:36:49 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*str;

	i = 0;
	if (str == 0)
		return (0);
	while (src[i] != '\0')
		++i;
	str = (char *)malloc(i * sizeof(char));
	if (str == 0)
		return (0);
	while (i >= 0)
	{
		str[i] = src[i];
		--i;
	}
	return (str);	
}
