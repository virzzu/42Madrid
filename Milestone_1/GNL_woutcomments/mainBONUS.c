
#include "get_next_line_bonus.h"
#include <fcntl.h>

int	main(void)
{
	int	fd1;
	int	fd3;
	int	fd2;


	fd1 = open("hola.txt", O_RDONLY);
	fd2 = open("hello.txt", O_RDONLY);
	fd3 = open("bonjour.txt", O_RDONLY);
	
	
	printf("FD1: %s\n", get_next_line_bonus(fd1));
	printf("FD2: %s\n", get_next_line_bonus(fd2));
	printf("FD3: %s\n", get_next_line_bonus(fd3));
	printf("FD1: %s\n", get_next_line_bonus(fd1));
}
