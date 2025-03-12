/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:08:39 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/12 17:32:39 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(unsigned long long dec, char type)
{
	if (dec >= 16)
	{
		ft_hex(dec / 16, type);
		ft_hex(dec % 16, type);
	}
	else if (dec <= 9)
		ft_putchar(dec + '0');
	else
	{
		if (type == 'x')
			ft_putchar(dec - 10 + 'a');
		else if (type == 'X')
			ft_putchar(dec - 10 + 'A');
	}
}

int	ft_printf_hex(unsigned long long dec, char type)
{
	int	i;

	i = 0;
	if (dec == 0)
		return (write(1, "0", 1));
	else
	{
		ft_hex(dec, type);
		i = ft_hexalen(dec);
	}
	return (i);
}
