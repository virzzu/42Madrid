NAME = libft.a

SRC = 	ft_atoi.c	\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memset.c		\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_split.c		\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_striteri.c	\
		ft_strjoin.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c		\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c		\
		ft_tolower.c	\
		ft_toupper.c

######
#Compilation
COMPILER = cc
AR = ar rcs  #s gives the library a better performance
OBJ = $(SRC:.c=.o)

FLGS = -Wall -Wextra -Werror

$(NAME): $(OBJ) #with obj placed here, now name depends of obj, so each time obj is changed, name will too
	$(CC) $(FLGS) -c $(SRC) #compile with 'Compiler' with the flags 'FLGS' -c compile only the .c files from 'SRC'
	@$(AR) $(NAME) $(OBJ) #ar creates the 'Name' library with the 'obj' objects

######
#Rule
all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
