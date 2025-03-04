/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:19:45 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/04 15:03:29 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
						
char	*ft_strjoin(char *buffy, char *temp)
{
	char	*joined;
	int		i;
	int		j;

	if (!buffy) //esto ocurre cuando estamos leyendo la primera línea del file.
	{
		buffy = malloc(sizeof(char) * 1);
		if (!buffy || !temp)
		{
			if (!temp && buffy)
				free(buffy);	
			return (NULL);
		}
		buffy[0] = '\0'; //Por lo tanto debemos inicializarla para poder pasarsela a ft_strlen y el puntero exista para después (aunque solo contenga el caracter nulo)
	}
	joined = malloc(sizeof(char) * ((ft_strlen(buffy) + ft_strlen(temp)) + 1));
	if (!joined) //si falla reserva de memoria
		return (NULL);
	i = 0;
	j = 0;
	while (buffy[j])
		joined[i++] = buffy[j++];
	j = 0;
	while (temp[j])
		joined[i++] = temp[j++];
	joined[i] = '\0';
	free(buffy);
	return (joined);
}
