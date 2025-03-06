
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*ptr;
	char hola[] = "Hola";
	ptr = hola;
	printf("ptr is %p\n", ptr);
	ft_pointer(ptr);

	return(0);
}