/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:19:45 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/18 14:42:12 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *line, char *temp)
{
	char	*joined;
	int		i;
	int		j;
	
	if (!line) //esto ocurre cuando estamos leyendo la primera línea del file.
	{
		line = malloc(sizeof(char) * 1);
		if (!line || !temp)
			return (NULL);
		line[0] = '\0'; //Por lo tanto debemos inicializarla para poder pasarsela a ft_strlen
	}
	joined = malloc(sizeof(char) * ((ft_strlen(line) + ft_strlen(temp)) + 1));
	if (!joined) //si falla reserva de memoria
		return (NULL);
	i = 0;
	j = 0;
	while (line[j] != 0)
		joined[i++] = line[j++];
	j = 0;
	while (temp[j])
		joined[i++] = temp[j++];
	joined[i] = '\0';
	free(line);
	return (joined);
}
