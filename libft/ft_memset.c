/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:18:17 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/01/31 16:59:09 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	size_t			num;
	unsigned char	*str;

	num = 0;
	str = ptr;
	while (num != len)
	{
		str[num] = value;
		num++;
	}
	return (ptr);
}

// int main() 
// {
//     char buffer[10];
// 	ft_memset(buffer, 56 , 3);
//     printf("Buffer contiene: %s\n", buffer);
//     return 0;
// }
// Rellena los primeros n bytes del bloque de memoria apuntado por ptr con el 
// valor dado en value.
