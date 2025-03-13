
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("\nFt: %d\n", ft_printf("\n%X", -10));
	printf("\nOriginal: %d\n", printf("\n%x", -10));
}