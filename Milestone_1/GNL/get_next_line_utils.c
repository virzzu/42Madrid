/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:19:45 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/05 17:40:00 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

size_t ft_strlen(char *str)
{
	size_t i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strjoin(char *buffy, char *char_read)
{
	char *joined;
	int i;
	int j;

	if (!buffy) // esto ocurre cuando estamos leyendo la primera línea del file.	
	{
		buffy = malloc(sizeof(char) * 1);
		if (!buffy || !char_read)
		{
			if (!char_read && buffy)
				free(buffy);
			return (NULL);
		}
		buffy[0] = '\0'; // Por lo tanto debemos inicializarla para poder pasarsela a ft_strlen y el puntero exista para después (aunque solo contenga el caracter nulo)
	}
	joined = malloc(sizeof(char) * (ft_strlen(buffy) + ft_strlen(char_read) + 1));
	if (!joined) // si falla reserva de memoria
		return (NULL);
	i = 0;
	j = 0;
	while (buffy[j])
		joined[i++] = buffy[j++];
	j = 0;
	while (char_read[j])
		joined[i++] = char_read[j++];
	joined[i] = '\0';
	free(buffy);
	buffy = NULL;
	return (joined);
}
