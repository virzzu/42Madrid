
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("\nFt: %d\n", ft_printf("\001\002\007\v\010\f\r\n"));
	printf("\nOriginal: %d\n", printf("\001\002\007\v\010\f\r\n"));
}