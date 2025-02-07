/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:14:20 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/06 09:45:25 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest = ft_memcpy(dest, src, len + 1);
	return (dest);
}

/*********************************MAIN**************************************/
// int	main(void)
// 	{
// 		const char	*buffer = "hola";
// 		char	*dest;
// 		char	*original;
// 		printf("Buffer w ft_ contains: %s\n", ft_strdup(buffer));
// 		printf("Buffer w original contains: %s", strdup(buffer));
// 		dest = ft_strdup(buffer);
// 		original = strdup(buffer)
// 		free(buffer);
// 		free(dest);
// 	}
/******************************EXPLANATION**********************************/
/*The ft_strdup() function returns a pointer to a new string which is a 
duplicate of the string src. Memory for the new string is obtained 
with malloc(3), and can be freed with free(3).
-> strdup TIENE leaks él solito, por lo tanto el mío también debe. */