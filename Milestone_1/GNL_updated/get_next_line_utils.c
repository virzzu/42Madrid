/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:19:45 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/06 16:32:46 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

	if (!buffy) // esto ocurre cuando estamos leyendo la primera línea del file, porque no ha sido asignado a ningún punto de la memoria
	{
		if (!(buffy= malloc(sizeof(char) * 1)) || !char_read) //se asigna un único byte de memoria para que exista.
		{
			if (!char_read && buffy)
				free(buffy);
			return (NULL);
		}
		buffy[0] = '\0'; //Inicializamos la memoria para poder pasarsela a ft_strlen
	}
	joined = malloc(sizeof(char) * (ft_strlen(buffy) + ft_strlen(char_read) + 1));
	if (!joined) // si falla reserva de memoria
		return (free (char_read), free(buffy), NULL);
	i = -1;
	while (buffy[++i])
		joined[i] = buffy[i];
	j = 0;
	while (char_read[j])
		joined[i++] = char_read[j++];
	joined[i] = '\0';
	return (free(buffy), buffy = NULL, joined);
}

int	ft_search(char *buffy)
{
	int	i;
	
	i = 0;
	while (buffy[i] != '\0' && buffy[i] != '\n') //busca que haya un salto de línea para no seguir leyendo más.
				i++;
	if (buffy[i] == '\n')
			return (1);
	else
		return (0);
}
