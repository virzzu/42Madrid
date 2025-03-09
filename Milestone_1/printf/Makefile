# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: virginia <virginia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 09:35:38 by virginia          #+#    #+#              #
#    Updated: 2025/03/09 13:29:21 by virginia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \

OBJ = $(SRC.c=.o)

####### Compilation #######
COMPILATOR = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs

$(NAME) : $(OBJ)
# #$(COMPILATOR) $(FLAGS) -c $(SRC) no se si hay que hacerlo??
	@$(AR) $(NAME) $(OBJ)

######## Rules #########

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all