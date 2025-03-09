

#include "ft_printf.h"

int	ft_number(int n)
{
	char	*num;
	num = ft_itoa(n);

	write(1, num, ft_strlen(num));
	return (ft_strlen(num));
}
