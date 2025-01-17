/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 12:22:09 by mhorpe            #+#    #+#             */
/*   Updated: 2019/07/10 13:00:17 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		*arr;
	int		i;
	int		c;

	if (min >= max)
		return (NULL);
	size = max - min;
	i = min;
	c = 0;
	arr = (int*)malloc(sizeof(*arr) * (size));
	while (i < max)
	{
		arr[c] = i;
		c = c + 1;
		i = i + 1;
	}
	return (arr);
}
