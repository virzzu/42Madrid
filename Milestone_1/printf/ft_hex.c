/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:08:39 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/13 15:48:51 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long long dec, char type)
{
	if (dec >= 16)
	{
		ft_hex(dec / 16, type);
		ft_hex(dec % 16, type);
	}
	else if (dec <= 9)
	{
		if (ft_putchar(dec + '0') < 0)
			return (-1);	
	}
	else
	{
		if (type == 'x')
		{
			if (ft_putchar(dec - 10 + 'a') < 0)
				return (-1);
		}
		else if (type == 'X')
		{
			if (ft_putchar(dec - 10 + 'A') < 0)
				return (-1);
		}
	}
	return (0);
}

int	ft_printf_hex(unsigned long long dec, char type)
{
	int	i;

	i = 0;
	if (dec == 0)
		return (write(1, "0", 1));
	else
	{
		if (ft_hex(dec, type) < 0)
			return (-1);
		i = ft_hexalen(dec);
	}
	return (i);
}
