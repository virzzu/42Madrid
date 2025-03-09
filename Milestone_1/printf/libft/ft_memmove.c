/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:02:32 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/05 10:17:17 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest < src)
		return (ft_memcpy(dest, src, len));
	if (dest > src)
	{
		while (len > 0)
		{
			((unsigned char *)dest)[len - 1] = ((unsigned char *)src)[len -1];
			len--;
		}
	}
	return (dest);
}

/**********************MAIN**********************/
/* int main() 
{
    char src[20] = "Example";
	char dest[20] = "Overlapping";

    printf("Before memmove: %s\n", dest);
    ft_memmove(dest , src, 0);
    printf("After memmove:  %s\n", dest);
    return 0;
} */
/************************DESCRIPTION****************************/
/*The ft_memmove() function copies n bytes from memory area 
src to memory area dest. The memory areas may overlap:
copying takes place as though the bytes in src are first
copied into a temporary array that does not overlap src or
dest, and the bytes are then copied from the temporary array to dest.
*/
