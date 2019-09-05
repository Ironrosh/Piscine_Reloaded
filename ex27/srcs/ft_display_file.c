/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 12:51:17 by mhorpe            #+#    #+#             */
/*   Updated: 2019/07/17 14:29:29 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(char *filename)
{
	int		fd;
	char	c;

	fd = open(filename, O_RDONLY);
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
}
