/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:08:00 by virginia          #+#    #+#             */
/*   Updated: 2025/03/13 11:53:04 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(size_t ptr)
{
	int	i;

	i = 0;
	i = write(1, "0x", 2);
	if (i < 0)
		return (-1);
	if (ptr == 0)
	{
		if (write(1, "0", 1) < 0)
			return (-1);
		i++;
	}
	else
	{
		ft_dec_to_hex(ptr);
		i = i + ft_hexalen(ptr);
	}
	return (i);
}
