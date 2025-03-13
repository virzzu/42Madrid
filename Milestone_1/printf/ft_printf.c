/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:01:17 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/13 12:54:38 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, char type)
{
	int	printed;

	printed = 0;
	if (type == '%')
		printed += ft_percentage('%');
	else if (type == 'c')
		printed += ft_putchar(va_arg(arg, int));
	else if (type == 's')
		printed += ft_string(va_arg(arg, char *));
	else if (type == 'p')
		printed += ft_pointer(va_arg(arg, size_t));
	else if (type == 'd' || type == 'i')
		printed += ft_number(va_arg(arg, int));
	else if (type == 'u')
		printed += ft_unsigned(va_arg(arg, unsigned int));
	else if (type == 'x' || type == 'X')
		printed += ft_printf_hex(va_arg(arg, unsigned int), type);
	else
		return(write(1, &type, 1));
	return (printed);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		i;
	int		printed;
	int		result;

	i = 0;
	printed = 0;
	va_start(arg, str);
	while (str && str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			result = ft_type(arg, str[++i]);
			if (result < 0)
				return (-1);
		}
		else
			result = ft_putchar(str[i]);
		if (result < 0)
			return (-1);
		printed += result;
		i++;
	}
	va_end(arg);
	return (printed);
}
