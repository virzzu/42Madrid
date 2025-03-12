

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	result;
	int	original;

	char	str[] = "Hola";
	int		i = 13;
	char	c = 'v';
	int		to_hex = 255;
	unsigned int ui = 5422;
	unsigned int *ptr;
	ptr = &ui;

/* 	result = ft_printf("[·]: %s, %i, %d, %c, %x, %X, %u, %p, %", str, i, i, c, to_hex, to_hex, ui, ptr);
 */	
	result = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n\n_________________\n\nResult:%i\n", result);
	
/* 	result = ft_printf("%p" , NULL);
	printf("%i", result);
	ft_printf("\n\n_________________\n\n");
	 */
/* 	original = printf("[·]: %s, %i, %d, %c, %x, %X, %u, %p, %", str, i, i, c, to_hex, to_hex, ui, ptr);	
 */	
/* 	original = printf("%p", NULL);
	printf("%i\n", original);
	return (0); */

	original = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n\n_________________\n\nOriginal:%i\n", original);
	return (0);
}

