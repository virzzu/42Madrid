/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:02:32 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/01/31 16:58:40 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	if (!src || !dest)
		return (NULL);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (p_dest < p_src)
	{
		while (len--)
		{
			*p_dest++ = *p_src++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			p_dest[len] = p_src[len];
		}
	}
	return (dest);
}

// int main() 
// {
//     char src[20] = "Example";
// 	char dest[20] = "Overlapping";

//     printf("Before memmove: %s\n", dest);
//     ft_memmove(dest , src, 15);
//     printf("After memmove:  %s\n", dest);
//     return 0;
// }
