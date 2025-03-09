/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:01:17 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/08 18:51:48 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>
//for the variadic arguments
#include <unistd.h>
#include <string.h>

int	ft_type(va_list aptr, char type)
{
	int	result;

	result = 0;
	if (type == '%')
		result = ft_percentage(va_arg(aptr, char));
	else if (type == 'c')
		result = ft_putchar(va_arg(aptr, char));
	else if (type == 's')
		result = ft_string(va_arg(aptr, char *));
	else if (type == 'p')
		result = ft_pointer(va_arg(aptr, unsigned long long));
	else if (type == 'd' || type == 'i')
		result = ft_putnbr(va_arg(aptr, int));
	else if (type == 'u')
		result = ft_unsigned(va_arg(aptr, unsigned int));
	else if (type == 'x' || type == 'X')
		result = ft_hexa(va_arg(aptr, unsigned int), type);
	return (result);	
}

int	ft_printf(char const *str, ...)
{
	va_list	aptr;
	int		i;
	int		result;
	

	i = 0;
	result = 0;
	va_start(aptr, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			result += ft_type(aptr, str[i + 1]);
			i++;
		}
		else
			result += ft_putchar(str[i]);
		i++;
	}
	va_end(aptr);
	return (result);
}

	// va_start( va_list argument, type); //va_start needs to be called before accesing any variable name is the mandatory argument
	// va_arg(va_list argument, type);
	// va_copy(va_list dest, va_list src);
	// va_end(va_list argument);
