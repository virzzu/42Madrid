/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:41:59 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/01/31 16:56:59 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/****************************MAIN************************************/
// int	main(void)
// {

// 	int *ptr = ft_calloc(2, 4);
// 	printf("Ptr contiene: %d\n", *ptr);
// 	free(ptr);
// }
/*************************EXPLANATION************************************/
/*Si nmemb (num of members) o size es 0, entonces calloc() devuelve 
un valor de puntero único que más tarde puede pasarse con éxito 
a free().

La función calloc() devuelve un puntero al espacio reservado. El 
espacio de almacenamiento al que apunta el valor de retorno está
adecuadamente alineado para el almacenamiento de cualquier tipo
de objeto. Para obtener un puntero a un tipo, utilice una conversión
de tipo en el valor de retorno. El valor de retorno es NULL si no hay
suficiente almacenamiento. ft_calloc (Contiguous Allocation) se usa para 
reservar memoria dinámica para un array de nmemb (num of members) elementos,
donde cada elemento tiene un tamaño de size bytes. Además,
inicializa la memoria a 0, a diferencia de malloc, que no garantiza
la inicialización..
------- EN
The calloc() function allocates memory for an array of  nmemb  elements
of  size bytes each and returns a pointer to the allocated memory.  The
memory is set to zero. If nmemb or size is 0,  then  calloc()  returns
either  NULL,  or a unique pointer value that can later be successfully
passed to free().  If the multiplication of nmemb and size would result
in  integer  overflow, then calloc() returns an error.*/
