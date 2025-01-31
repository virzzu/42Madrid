/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:09:40 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/01/31 18:19:28 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3_len;
	
	s3_len = (ft_strlen(s1) + ft_strlen(s2));
	s3 = malloc((sizeof(char) * s3_len) + 1);
	if (!s3)
		return(NULL);
	ft_strlcat(s3, s1, ft_strlen(s1));
	ft_strlcat(s3 + ft_strlen(s1) - 1, s2, s3_len); //-1 porque strlcat añade 0 al final y no lo quiero
	return(s3);
}

/*****************MAIN******************/
int	main(void)
{
	char	s1[]= "Hola";
	char	s2[]= "Hello";
	char	*result;
	result = ft_strjoin(s1,s2);
	printf("Final string is: %s\n", ft_strjoin(s1, s2));
	printf("Result is: %s\n", result);
	return(0);
}