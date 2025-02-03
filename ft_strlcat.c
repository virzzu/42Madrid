/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:55:16 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/03 11:57:21 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	dest_len;
	char	*d;

	if (dest_size <= ft_strlen(dest))
		return(dest_size + ft_strlen(src));
	d = dest + ft_strlen(dest);
	i = 0;
	dest_len = ft_strlen(dest);
	while (i++ < dest_size - dest_len - 1 && *src)
		*d++ = *src++;
	*d = '\0';
	return(ft_strlen(dest) + ft_strlen(src));
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
