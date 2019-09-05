/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:43:58 by mhorpe            #+#    #+#             */
/*   Updated: 2019/09/05 17:29:11 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr_newline(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		ft_putchar(str[counter]);
		counter = counter + 1;
	}
	ft_putchar('\n');
}

int			ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while ((s1[count] == s2[count]) && s1[count] && s2[count])
	{
		count = count + 1;
	}
	return (s1[count] - s2[count]);
}

int			main(int argc, char **argv)
{
	int		c;
	int		match;
	char	*temp;

	match = 1;
	while (match == 1)
	{
		c = 1;
		match = 0;
		while (c < argc - 1)
		{
			if (ft_strcmp(argv[c], argv[c + 1]) > 0)
			{
				temp = argv[c];
				argv[c] = argv[c + 1];
				argv[c + 1] = temp;
				match = 1;
			}
			c = c + 1;
		}
	}
	while (match++ < argc - 1)
		ft_putstr_newline(argv[match]);
	return (0);
}
