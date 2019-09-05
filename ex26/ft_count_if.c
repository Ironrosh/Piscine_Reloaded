/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:48:07 by mhorpe            #+#    #+#             */
/*   Updated: 2019/07/15 14:50:56 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			count = count + 1;
		index = index + 1;
	}
	return (count);
}
