/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:59:29 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/07 15:45:33 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*fx)(unsigned int, char*))
{
	unsigned int	i;

	if (!str || !fx)
		return ;
	i = 0;
	while (str[i])
	{
		fx(i, &str[i]);
		i++;
	}
}
