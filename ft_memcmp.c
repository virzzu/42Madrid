/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:30:57 by virginia          #+#    #+#             */
/*   Updated: 2025/02/07 17:00:33 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;

	i = 0;
	p_s1 = (const unsigned char *)s1;
	p_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
		{
			return (p_s1[i] - p_s2[i]);
		}
		i++;
	}
	return (0);
}

/*La función ft_memcmp compara dos bloques de memoria byte a byte. 
Es útil cuando quieres comparar datos binarios almacenados en memoria, 
no necesariamente cadenas de texto.*/
/**********MAIN*************/
// int main() {
//     char data1[] = {1, 2, 3, 4, 5};
//     char data2[] = {1, 2, 0, 4, 5};

//     int result = memcmp(data1, data2, 5);

//     if (result == 0) {
//         printf("Los bloques son iguales.\n");
//     } else if (result < 0) {
//         printf("El bloque 1 es menor que el bloque 2.\n");
//     } else {
//         printf("El bloque 1 es mayor que el bloque 2.\n");
//     }

//     return 0;
// }
