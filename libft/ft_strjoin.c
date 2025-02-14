/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:09:40 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/04 17:20:07 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3_len;

	s3_len = (ft_strlen(s1) + ft_strlen(s2));
	s3 = malloc(sizeof(char) * (s3_len + 1));
	if (!s3)
		return (NULL);
	s3[0] = '\0';
	if (ft_strlen(s1) == 0)
		ft_strlcat(s3, s2, s3_len + 1);
	else
	{
		ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
		ft_strlcat(s3 + ft_strlen(s1), s2, s3_len + 1);
	}
	s3[s3_len] = '\0';
	return (s3);
}

/*****************MAIN******************/
// int	main(void)
// {
// 	char	s1[]= "Holapajaritosincola";
// 	char	s2[]= "";
// 	char	*result;
// 	result = ft_strjoin(s1,s2);
// 	printf("Final string is: %s\n", ft_strjoin(s1, s2));
// 	return(0);
// }