/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:37:08 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/18 14:46:21 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*ft_read(int fd, char *line)
{
	char	*temp; //array temporal donde guardamos los nuevos datos leidos
	ssize_t	bytes_read; //sirve de control por si read falla o ha terminado de leer el archivo.

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1)); //reservamos memoria para meter TODOS los bytes leídos
	if (!temp) //si falla la reserva de memoria, por enunciado devolvemos null
		return (NULL);
	bytes_read = 1;
	if (bytes_read != 0) //bucle para leer hasta que en line haya una línea completa y aún queden bytes por leer
	{
		bytes_read = read(fd, temp, BUFFER_SIZE); //leemos
		if (bytes_read == -1 || bytes_read == 0) //esto significa que ha habido un error de lectura por parte de read
		{
			free(temp); //liberamos memoria
			free(line); //strjoin hace malloc
			return (NULL); //por enunciado
		}
		temp[bytes_read] = '\0';//añadimos 0 al final para que sea una cadena válida para otras funciones
		line = ft_strjoin(line, temp); //line tiene cosas hasta /n y puede que algo más
	}
	// if (bytes_read == 0) //puede que esto no haga falta??
	// {
	// 	free(temp);
	// 	return (NULL);
	// }
	printf("Temp contiene:%s\n", temp);
	return (line);
}

static char	*ft_before_endl(char *line) //busca en una cadena pasada por read si hay un \n, devuelve el string que hay antes pero mantiene lo de después
{
	char	*before_endl; //guarda solo la primera línea
	int		i;
	int		j;
	
	i = 0;
	if (!line) //si no tengo line es que ft_read no lo ha conseguido
		return(NULL);
	while (line[i] && line[i] != '\n')
		i++; //i será el numero de char antes del endl y/o el índice de '\n'
	before_endl = malloc(sizeof(char) * (i + 2)); //mas dos porque necesita el '\n' y el '\0'.
	if (!before_endl) //fallo de reserva de memoria
		return (NULL);
	j = 0;
	while (j <= i) //bucle que copia la primera línea que haya escrita en line, incluido el endl a su variable correspondiente
	{
		before_endl[j] = line [j]; //line sigue teniendo todo !! se lo tengo que pasar a ft_after_endl para que lo mueva a justo después del '\n'
		j++;
	}
	before_endl[j] = '\0';
	return (before_endl);//fisrt tiene dentro solo hasta el \n incluido
}

static char	*ft_after_endl(char *line)
{
	char	*after_endl;
	int		i;
	int		j;

	i = 0;
	if (!line)
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++; //i será el numero de char antes del endl y/o el índice de '\n'
	after_endl = malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	j = 0;
	i++; //paso el índice al siguiente char después de '\n'.
	while (line[i])
		after_endl[j++] = line[i++];
	after_endl[j] = '\0'; //añadimos un fin de str para que sea válido
	free(line);
	return (after_endl);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*buffer;

	if (!(fd >= 0 && BUFFER_SIZE > 0))
		return (NULL);
	line = ft_read(fd, line);
	buffer = ft_before_endl(line); //meto dentro de buffer todo lo primero hasta endl
	line = ft_after_endl(line);
	return (buffer);
}