# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masselgu <masselgu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 12:41:19 by masselgu          #+#    #+#              #
#    Updated: 2025/11/16 10:27:51 by masselgu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRC = ft_print_signed.c ft_printf.c ft_print_string.c ft_print_char.c \
ft_print_unsigned.c ft_print_hex_lower.c ft_print_hex_upper.c ft_print_percent.c \
ft_print_pointer.c ft_putchar.c ft_putstr.c ft_strlen.c ft_itoa.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re