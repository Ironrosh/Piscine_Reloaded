/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:45:41 by mhorpe            #+#    #+#             */
/*   Updated: 2019/07/10 12:00:15 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	while (src[i])
		i = i + 1;
	size = i;
	str = (char*)malloc(sizeof(*str) * (size + 1));
	i = 0;
	while (i < size)
	{
		str[i] = src[i];
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}
