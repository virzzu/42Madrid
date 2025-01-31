/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:13:49 by virginia          #+#    #+#             */
/*   Updated: 2025/01/31 16:59:40 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	int				src_size;
	unsigned int	i;

	src_size = 0;
	i = 0;
	while (src[src_size])
		src_size++;
	while (dest_size != 0 && src[i] && i < (dest_size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}

// int main(void) 
// {
//     char src[] = "Hola, mundo!";
//     char dest[20]; // Búfer de destino con espacio limitado.
//     size_t result = ft_strlcpy(dest, src, sizeof(dest));
//     printf("Destino: %s\n", dest);  // Salida: "Hola,"
//     printf("Longitud de origen: %zu\n", result);  // Salida: 12
//     return 0;
// }
/************************DESCRIPTION********************************/