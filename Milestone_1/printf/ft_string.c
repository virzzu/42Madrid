/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:56:11 by virginia          #+#    #+#             */
/*   Updated: 2025/03/13 11:44:46 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str && str[i] != '\0')
		i++;
	return (i);
}

int	ft_string(char	*str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	return(write(1, str, ft_strlen(str)));
}
