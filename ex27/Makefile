#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhorpe <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/17 14:15:41 by mhorpe            #+#    #+#              #
#    Updated: 2019/07/17 14:23:55 by mhorpe           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SOURCE = srcs/ft_display_file.c srcs/main.c

OBJ_FILES = ft_display_file.o main.o

all:
	gcc -c -Wall -Wextra -Werror $(SOURCE)
	gcc $(OBJ_FILES) -o $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)