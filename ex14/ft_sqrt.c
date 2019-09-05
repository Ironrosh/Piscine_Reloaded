/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:31:19 by mhorpe            #+#    #+#             */
/*   Updated: 2019/09/03 18:43:30 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		temp;
	int		result;

	result = 0;
	temp = 1;
	while (temp * temp <= nb)
	{
		if (temp * temp == nb)
			return (temp);
		else
			result = 0;
		temp++;
	}
	return (result);
}
