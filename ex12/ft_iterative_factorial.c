/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:11:33 by mhorpe            #+#    #+#             */
/*   Updated: 2019/09/03 18:21:10 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
