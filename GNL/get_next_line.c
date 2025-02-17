/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:37:08 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/17 21:17:42 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <string.h>

/* ssize_t read(int fd, void *buf, size_t count); */
static char	*ft_read(int fd, char *line)
{
	char	*buffer; //array temporal donde guardamos los nuevos datos leidos
	ssize_t	bytes_read;

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!strchr(line, '\n') && bytes_read != 0) //bucle para leer hasta que en line haya una línea completa y aún queden bytes por leer
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE); //leemos
		if (bytes_read == -1) //esto significa que ha habido un error de lectura por parte de read
		{
			free(buffer); //liberamos memoria
			free(line); //strjoin hace malloc
			return (NULL); //por enunciado
		}
		buffer[bytes_read] = '\0';//añadimos 0 al final para que sea una cadena válida para otras funciones
		line = ft_strjoin(line, buffer); //line tiene cosas hasta /n y puede que algo más
	}
	free(buffer);
	if (bytes_read == 0) //puede que esto no haga falta??
		return (NULL);
	printf("Buffer contiene: %s\n", buffer);
	return (line);
}
static char	*ft_clean_line(char *line) //busca en una cadena si hay un \n, devuelve el string que hay antes pero mantiene lo de después
{
	char	*next;
	char	*cleaned;
	int		i;
	
	if (strchr(line, '\n'))
	{
		next = strchr(line, '\n');
		if ((next + 1) != '\0') //si el salto de línea no es justo el último char
			next++; //next ahora apunta a lo que hay después del salto, es decir, la siguiente línea almacenada
	}
	
	return (cleaned);
}

char	*get_next_line(int fd)
{
	static char	*line;
	ssize_t		bytes_read;
	char		*buffer;

	if (!(fd > 0 && BUFFER_SIZE > 0))
		return (NULL);
	buffer = ft_read(fd, line);
	if (!line)
		return (NULL);
	return (line);
}