/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:48:03 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/05 17:05:15 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	l;
	int		i;

	i = 0;
	l = (char)c;
	while (str[i])
	{
		if (str[i] == l)
			return ((char *)&str[i]);
		i++;
	}
	if (l == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*La función ft_strchr es una función que se utiliza para 
localizar la primera aparición de un carácter c en una cadena.
Devuelve un puntero a esa pos (índice)*/

// #include <stdio.h>
// #include <string.h>
// int main() {
//     const char *cad = "Hola, mundo!";
//     char buscar = 'H';
//     char *res;
//     res = ft_strchr(cad, buscar);
//     if (res) {
//         printf("El carácter '%c' se encontró en la posición: %ld\n", 
// buscar, res - cad);
//     } else {
//         printf("El carácter '%c' no se encontró.\n", buscar);
//     }
//     return 0;
// }
