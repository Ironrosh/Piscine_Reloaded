#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhorpe <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 12:12:56 by mhorpe            #+#    #+#              #
#    Updated: 2019/07/15 13:13:28 by mhorpe           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c srcs/ft_strlen.c

NAME = libft.a

INCLUDE = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCES) -I $(INCLUDE)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o

clean:
	rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

fclean: clean
	rm -f $(NAME)

re: fclean all