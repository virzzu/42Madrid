NAME = libft.a

SRC = 	ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memset.c		\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c		\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_substr.c		\
		ft_tolower.c	\
		ft_toupper.c	\
######
#Compilation
COMPILER = cc
AR = ar rcs  #s gives the library a better performance
OBJ = $(SRC:.c=.o)

FLGS = -Wall -Wextra -Werror

$(NAME):
	$(CC) $(FLGS) -c $(SRC) #compile with 'Compiler' with the flags 'FLGS' -c compile only the .c files from 'SRC'
	$(AR) $(NAME) $(OBJ) #ar creates the 'Name' library with the 'obj' objects


all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
