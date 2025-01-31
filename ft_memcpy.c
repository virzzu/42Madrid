/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:03:15 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/01/31 16:58:33 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			n;
	unsigned char	*p_dest;
	unsigned char	*p_src;

	n = 0;
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	while (n < len)
	{
		p_dest[n] = p_src[n];
		n++;
	}
	return (dest);
}

/*********************************MAIN******************************/
//int main() 
//{
//	char	buffer[] = "holi";
//	char	hello[100] = "holittttttt";
//	ft_memcpy(buffer, hello , 3);
//	printf("Buffer contiene: %s\n", buffer);
//	return 0;
//}
/******************************DESCRIPTION****************************/