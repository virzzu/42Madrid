/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:37:08 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/19 18:14:42 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*ft_read(int fd, char *buffy)
{
	char	*temp; //array temporal donde guardamos los nuevos datos leidos
	ssize_t	bytes_read; //sirve de control por si read falla o ha terminado de leer el archivo.
	int		i;
	
	i = 0;
	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1)); //reservamos memoria para meter TODOS los bytes leídos
	if (!temp) //si falla la reserva de memoria, por enunciado devolvemos null
		return (NULL);
	bytes_read = 1;
	while (bytes_read != 0) //bucle para leer hasta que en buffy haya una línea completa (hasta \n) y aún queden bytes por leer
	{
		bytes_read = read(fd, temp, BUFFER_SIZE); //leemos y lo guardamos en temp
		if (bytes_read == -1 || bytes_read == 0) //esto significa que ha habido un error de lectura por parte de read
		{
			free(temp); //liberamos memoria
			// free(buffy); //strjoin hace malloc
			return (NULL); //por enunciado
		}
		temp[bytes_read] = '\0';//añadimos 0 al final para que sea una cadena válida para otras funciones
		buffy = ft_strjoin(buffy, temp); //buffy tiene cosas hasta /n y puede que algo más
		while (buffy[i] != '\0' && buffy[i] != '\n') //busca que haya un salto de línea para no seguir leyendo más.
			i++;
		if (buffy[i] == '\n')
			return (buffy);
		
		// if (bytes_read < BUFFER_SIZE) //estoy en la útlima línea
		// 	return (buffy);
	}
	return(buffy);
}

static char	*ft_before_endl(char *buffy) // devuelve el string que hay antes del \n pero mantiene lo de después
{
	char	*before_endl; //guarda solo la primera línea
	int		i;
	int		j;
	
	i = 0;
	if (!buffy) //si no tengo buffy es que ft_read no lo ha conseguido
		return(NULL);
	while (buffy[i] && buffy[i] != '\n')
		i++; //i será el numero de char antes del endl y/o el índice de '\n'
	before_endl = malloc(sizeof(char) * (i + 2)); //mas dos porque necesita el '\n' y el '\0'.
	if (!before_endl) //fallo de reserva de memoria
		return (NULL);
	j = 0;
	while (buffy[j] && buffy[j] != '\n') //bucle que copia la primera línea que haya escrita en buffy, incluido el endl a su variable correspondiente
	{
		before_endl[j] = buffy[j]; //buffy sigue teniendo todo !! se lo tengo que pasar a ft_after_endl para que lo mueva a justo después del '\n'
		j++;
	}
	before_endl[j] = '\0';
	
	return (before_endl);//fisrt tiene dentro solo hasta el \n incluido
}

static char	*ft_after_endl(char *buffy)
{
	char	*after_endl;
	int		i;
	int		j;

	i = 0;
	if (!buffy)
		return (NULL);
	while (buffy[i] && buffy[i] != '\n')
		i++; //i será el numero de char antes del endl y/o el índice de '\n'
	after_endl = malloc(sizeof(char) * (ft_strlen(buffy) - i + 1));
	j = 0;
	i++; //paso el índice al siguiente char después de '\n'.
	while (buffy[i])
		after_endl[j++] = buffy[i++];
	after_endl[j] = '\0'; //añadimos un fin de str para que sea válido
	free(buffy);
	return (after_endl);
}

char	*get_next_line(int fd)
{
	static char	*buffy;
	char		*line;

	if (!(fd >= 0 && BUFFER_SIZE > 0 && fd < FOPEN_MAX))
		return (NULL);
	buffy = ft_read(fd, buffy); //tenemos buffy hasta el salto de línea
	line = ft_before_endl(buffy); //meto dentro de line todo lo primero hasta endl
	buffy = ft_after_endl(buffy);
	return (line);
}
