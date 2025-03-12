/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:41:57 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/12 17:31:52 by vgarcia-         ###   ########.fr       */
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

void	ft_dec_to_hex(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_dec_to_hex(ptr / 16);
		ft_dec_to_hex(ptr % 16);
	}
	else if (ptr <= 9)
		ft_putchar(ptr + '0');
	else
		ft_putchar(ptr - 10 + 'a');
}
