/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:01:17 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/24 19:17:14 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "ft_printf.h" */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int	ft_printf(char *fixed)
{
	int	i;

	i = 0;
	while (fixed)
	{
		write(1, fixed , 1);
		fixed++;
		if (fixed == '%')
		{
			fixed++;
			if (fixed == '%')
				return(ft_percentage(fixed));
			continue;
		}
	}
	return (strlen(fixed));
	// va_start( va_list argument, fixed); //va_start needs to be called before accesing any variable name is the mandatory argument
	// va_arg(va_list argument, type);
	// va_copy(va_list dest, va_list src);
	// va_end(va_list argument);

}

int	main(void)
{
	
	char	str[] = "Holaj%'y";
	ft_printf(str);
	
	return (0);
}