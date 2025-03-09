
#include <stdio.h>

#include <stdio.h>
#include <stdarg.h>

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		result;
	

	i = 0;
	result = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			result += ft_format(args, str[i + 1]);
			i++; //avanzo para ignorar el char de formato
		}
		else
			result += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (result);
}