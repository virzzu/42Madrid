/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:03:21 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/06 13:52:36 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_countwords(char const *str, char c) //cuenta el num de palabras en la frase, delimitadas por c, que es el num de rows en mi array
{
	unsigned int	num_words; //iterador que cuenta el numero de palabras entre el delimitador
	unsigned int	i; //iterador que recorre el string char por char

	i = 0;
	num_words = 0;
	while (str[i]) //mientras el char exista
		{
			while (str[i] == c)
				i++;
			if (str[i] != '\0')
				num_words++; //añade una palabra
			while (str[i] && str[i] != c)
				i++; //pasa a la siguiente letra
		}
	
	return (num_words);
}

static char	*ft_putword(char const *str, char c) //recibe un puntero a la palabra y el delimitador
{
	int		len; //iterador cuenta la longitud de la palabra
	char	*word; //puntero a cada letra de la palabra

	len = 0;
	while (str[len] && str[len] != c) //contamos la longitud de la palabra
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1)); //guardamos la palabra en la memoria según su longitud
	if (!word) //si no lo ha conseguido por espacio, devolvemos null...
		return (NULL);
	len = 0;
	while (str[len] && str[len] != c) //volvemos a recorrer la palabra
	{
		word[len] = str[len]; //rellenamos word con lo que hay en la palabra
		len++;
	}
	word[len] = '\0'; //añadimos null al final
	return (word); //devolvemos un puntero a la palabra, ya guardada en memoria
}

static char	**ft_free_array(char **array, size_t row)
{
	while (row > 0) //mientras haya una row que liberar
	{
		free(array[row - 1]); //libera la row del array
		row--;  //cambia de row
	}
	free(array); //libera el array char**
	return (NULL); //devuelve null porque ha habido que liberar y no se ha podido construir el array
}

char	**ft_split(char const *str, char c)
{
	char	**array;
	size_t	num_words;
	size_t	row;
	
	row = 0;
	if (!str)
		return (NULL);
	num_words = ft_countwords(str, c); //lo guardo en una variable para legilibilidad del código
	array = (char **)malloc(sizeof(char *) * (num_words + 1)); //guardo espacio para sizeof(char *)tells C to measure the size of the data at the address
	if (!array)
		return (NULL);
	while (row < num_words)
	{
		while (*str == c) //Buscamos el delimitador de antes de la palabra
			str++; //si el char al que apuntamos es igual que el delimitador, pasa al siguiente char, porque será el primer char de la palabra
		array[row] = ft_putword(str, c);
		if (!array[row]) // si no se ha podido crear alguna de las rows por espacio, no existirá esa row porque ft_putword devolverá NULL en vez de crearla
			return(ft_free_array(array, row)); // y tendremos que liberar todas las rows
		while (*str && *str != c) //buscamos el delimitador de después de la palabra
			str++; //Recorremos la palabra entera porque la hemos copiado ya en el array y no la necesitamos
		row++; //cambiamos de fila
	}
	array[row] = NULL; //añadimos un row más que es NULL por ser un array de strings
	return (array);
}
