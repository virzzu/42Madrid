/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:37:08 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/06 16:03:19 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read(int fd, char *buffy)
{
	char	*temp; //array temporal donde guardamos los nuevos datos leidos
	char	*joined; 
	ssize_t	bytes_read; //sirve de control por si read falla o ha terminado de leer el archivo.

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1)); //reservamos memoria para meter TODOS los bytes leídos
	if (!temp) //si falla la reserva de memoria, por enunciado devolvemos null
		return (NULL);
	bytes_read = 1;
	while (bytes_read != 0) //bucle para leer hasta que en buffy haya una línea completa (hasta \n) y aún queden bytes por leer
	{
		bytes_read = read(fd, temp, BUFFER_SIZE); //leemos y lo guardamos en temp
		if (bytes_read == -1 ) //si falla la reserva de memoria
			return (free(temp), free(buffy), NULL); //primero liberamos memoria y por enunciado devolvemos NULL
		if (bytes_read == 0) //esto significa que ha terminado de leer pero puede que haya cosas dentro de buffy
			break; //simplemente salimos del bucle
		temp[bytes_read] = '\0';//añadimos 0 al final para que sea una cadena válida para otras funciones
		if (!(joined = ft_strjoin(buffy, temp))) //joined tiene cosas hasta /n y puede que algo más
			return (free(temp), free(buffy), buffy = NULL, NULL);
		buffy = joined;
		if (ft_search(buffy) == 1)
			return (free(temp), buffy);
	}
	return(free(temp), buffy); // liberamos temp y devolvemos buffy
}

static char	*ft_before_endl(char *buffy) // devuelve el string que hay antes del \n pero mantiene lo de después
{
	char	*before_endl; //guarda solo la primera línea
	int		i;
	
	i = 0;
	if (!buffy[i]) //si no tengo buffy es que ft_read no lo ha conseguido, y si no hay nada e 
		return(NULL);
	while (buffy[i] && buffy[i] != '\n') //buscador de salto de línea.
		i++; //i será el numero de char antes del endl y/o el índice de '\n'
	before_endl = malloc(sizeof(char) * (i + 2)); //mas dos porque necesita el '\n' y el '\0'.
	if (!before_endl) //fallo de reserva de memoria
		return (free(buffy), buffy = NULL, NULL);
	i = 0;
	while (buffy[i] && buffy[i] != '\n') //bucle que copia la primera línea que haya escrita en buffy, incluido el endl a su variable correspondiente
	{
		before_endl[i] = buffy[i]; //buffy sigue teniendo todo !! se lo tengo que pasar a ft_after_endl para que lo mueva a justo después del '\n'
		i++;
	}
	if (buffy[i] == '\n')
	{
		before_endl[i] = '\n';
		before_endl[i + 1] = '\0';	
	}
	else
		before_endl[i] = '\0';
	return (before_endl);//before_endl tiene dentro solo hasta el \n, incluido
}

static char	*ft_after_endl(char *buffy)
{
	char	*after_endl;
	int		i;
	int		j;

	i = 0;
	if (!buffy[i])
		return (free(buffy), NULL);
	while (buffy[i] && buffy[i] != '\n')
		i++; //i será el numero de char antes del endl y/o el índice de '\n'
	if (!(after_endl = malloc(sizeof(char) * (ft_strlen(buffy) - i + 1))))
		return (free(buffy), buffy = NULL, NULL);
	j = 0;
	if (buffy[i] != '\0')
		i++; //paso el índice al siguiente char después de '\n'.
	while (buffy[i]) //i ya está iterado por lo que es cuando encuentra el \n. Devuelve lo de después del \n. Hasta el final
		after_endl[j++] = buffy[i++];
	after_endl[j] = '\0'; //añadimos un fin de str para que sea válido
	free(buffy);
	buffy = NULL;
	return (after_endl);
}

char	*get_next_line(int fd)
{
	static char	*buffy;
	char		*line;

	if (!(fd >= 0 && BUFFER_SIZE > 0 && fd < FOPEN_MAX))
		return (NULL);
	buffy = ft_read(fd, buffy);
	if (!buffy)
		return (NULL); //tenemos buffy hasta el salto de línea
	line = ft_before_endl(buffy); //meto dentro de line todo lo primero hasta endl
	buffy = ft_after_endl(buffy);
	return (line);
}
