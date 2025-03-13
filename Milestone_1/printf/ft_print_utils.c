/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:41:57 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/13 15:49:03 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalen(size_t ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		ptr /= 16;
		len++;
	}
	return (len);
}

int	ft_dec_to_hex(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_dec_to_hex(ptr / 16);
		ft_dec_to_hex(ptr % 16);
	}
	else if (ptr <= 9)
	{
		if (ft_putchar(ptr + '0') < 0)
			return (-1);	
	}
	else
	{
		if (ft_putchar(ptr - 10 + 'a') < 0)
			return (-1);
	}
	return (0);
}
