/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:01:17 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/12 18:06:34 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, char type)
{
	int	result;

	result = 0;
	if (type == '%')
		result += ft_percentage('%');
	else if (type == 'c')
		result += ft_putchar(va_arg(arg, int));
	else if (type == 's')
		result += ft_string(va_arg(arg, char *));
	else if (type == 'p')
		result += ft_pointer(va_arg(arg, unsigned long long));
	else if (type == 'd' || type == 'i')
		result += ft_number(va_arg(arg, int));
	else if (type == 'u')
		result += ft_unsigned(va_arg(arg, unsigned int));
	else if (type == 'x' || type == 'X')
		result += ft_printf_hex(va_arg(arg, unsigned int), type);
	return (result);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		i;
	int		result;

	i = 0;
	result = 0;
	va_start(arg, str);
	while (str && str[i] != '\0')
	{
		if (str[i] == '%' && str[i] != '\0')
		{
			if (str[i + 1] == '\0')
				return (-1);
			result += ft_type(arg, str[i + 1]);
			i++;
		}
		else
			result += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (result);
}
