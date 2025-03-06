/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:08:00 by virginia          #+#    #+#             */
/*   Updated: 2025/02/23 11:54:55 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include <string.h>
#include <unistd.h>

int	ft_pointer(void *ptr)
{
	void	**address;
	address = ptr;
	write(1, *address, strlen(*address));
	write(1, "\n", 1);
	return(strlen(ptr));
}