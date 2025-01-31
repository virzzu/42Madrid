/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:24:10 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/01/31 17:00:11 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	maxlen;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	maxlen = ft_strlen(s + start);
	if (len > maxlen)
		len = maxlen;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

/*********************************MAIN************************************/
// int	main(void)
// {
// 	char const *str = "Hola mundito";
// 	printf("El substring es: %s\n", ft_substr(str, 1, 1));
// 	/****Pruebas de caja negra****/
// 	printf("Caso normal: %s\n", ft_substr("Hola, mundo", 2, 5));  // "la, m"
// 	printf("Start fuera de rango: %s\n", ft_substr("Hola", 10, 5)); // ""
// 	printf("Len demasiado grande: %s\n", ft_substr("Hola", 1, 100)); // "ola"
// 	printf("String vacío: %s\n", ft_substr("", 0, 5));  // ""
// 	return (0);
// }
/*******************************EXPLANATION*******************************/
/*Quiero reservar un espacio de memoria dentro de un string para poder extraer
un substring, es como si quisiera copiar una palabra de una frase y pegarla en
otro lado.
	s: La string desde la que crear la substring.
	start: El índice del caracter en ’s’ desde el que empezar la substring.
	len: La longitud máxima de la substring.
Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
La substring empieza desde el índice ’start’ y tiene una longitud máx ’len'.
Devuelve la substring resultante y NULL si falla la reserva de memoria.*/