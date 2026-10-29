/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafipetr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:23:50 by rafipetr          #+#    #+#             */
/*   Updated: 2026/10/29 19:11:37 by rafipetr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		++min;
	}
	return (arr);
}
