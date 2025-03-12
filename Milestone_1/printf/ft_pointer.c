/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:08:00 by virginia          #+#    #+#             */
/*   Updated: 2025/03/12 18:29:16 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(size_t ptr)
{
	int	i;

	i = 0;
	i = i + write(1, "0x", 2);
	if (ptr == 0)
		i = i + write(1, "0", 1);
	else
	{
		ft_dec_to_hex(ptr);
		i = i + ft_hexalen(ptr);
	}
	return (i);
}
