/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:03:15 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/07 16:32:51 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	if (src == dest)
		return (dest);
	while (i < len)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
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