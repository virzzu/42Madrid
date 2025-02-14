/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:07:23 by virginia          #+#    #+#             */
/*   Updated: 2025/01/31 16:59:58 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!*little)
		return ((char *) big);
	if (!len)
		return (NULL);
	while (*big && little_len <= len)
	{
		if (*big == *little && !ft_strncmp(big, little, little_len))
			return ((char *) big);
		++big;
		--len;
	}
	return (NULL);
}
/*******************************MAIN*************************************/
// int	main(void)
// {
// 	char	needle[4] = "";
// 	char	haystack[40] = "hello wiworld!";

// 	printf("%s\n", ft_strnstr(haystack, needle, ft_strlen(haystack)));
// }
/*********************************Description**************************/
/*The ft_strnstr() function locates the 1st occurrence of the null-
terminated string needle in the string haystack, where not more than the
len-first characters are searched. Characters that appear after a ‘\0’ 
character are not searched.*/