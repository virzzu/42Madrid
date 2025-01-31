/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:55:16 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/01/31 18:29:34 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	unsigned int	len;
	int				s;
	int				d;

	d = 0;
	while (dest[d])
		d++;
	d--;
	len = ft_strlen(src) + ft_strlen(dest);
	s = 0;
	while (dest[d] && len <= (dest_size - 1) && src[s])
		dest[d++] = src[s++];
	dest[d] = '\0';
	return (len);
}

// int main(void) 
// {
//     char dest[50] = "Holis, ";
//     const char src[] = "mundo!";
//     size_t result;
//     // Concatenar src a dest asegurando no exceder el tamaño del búfer
//     result = ft_strlcat(dest, src, sizeof(dest));
//     // Imprimir el resultado
//     printf("Resultado: %s\n", dest); // "Hola, mundo!"
//     printf("Longitud total esperada (sin NULL): %zu\n", result); // 12
//     return 0;
// }
