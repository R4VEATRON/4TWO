# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelsafi <aelsafi@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 13:16:39 by aelsafi           #+#    #+#              #
#    Updated: 2025/11/18 13:16:40 by aelsafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

FILES = ft_printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_put_hex.c\
		ft_putnbr.c\
		ft_put_unsigned.c\
		ft_pointer.c

OFILES = $(FILES:.c=.o)

$(NAME): $(OFILES)
	$(AR) $(NAME) $(OFILES) 

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re