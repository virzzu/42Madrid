# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 16:32:44 by vgarcia-          #+#    #+#              #
#    Updated: 2025/03/12 18:05:15 by vgarcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_hex.c			\
		ft_number.c			\
		ft_percentage.c		\
		ft_pointer.c		\
		ft_printf.c			\
		ft_print_utils.c	\
		ft_putchar.c		\
		ft_string.c			\
		ft_unsigned.c		\

OBJ = $(SRC:.c=.o)

####### Compilation #######
COMPILER = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rc

######## Rules #########

$(NAME) : $(OBJ)
	$(COMPILER) $(FLAGS) -c $(SRC) 
	$(AR) $(NAME) $(OBJ) 

all: $(NAME)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all