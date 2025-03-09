/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:24:10 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/04 10:05:50 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	maxlen;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	maxlen = ft_strlen(s + start);
	if (len > maxlen)
		len = maxlen;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

/*********************************MAIN************************************/
// int	main(void)
// {
// 	char const *str = "Hola mundito";
// 	printf("El substring es: %s\n", ft_substr(str, 1, 1));
// 	/****Pruebas de caja negra****/
// 	printf("Caso normal: %s\n", ft_substr("Hola, mundo", 2, 5));  // "la, m"
// 	printf("Start fuera de rango: %s\n", ft_substr("Hola", 10, 5)); // ""
// 	printf("Len demasiado grande: %s\n", ft_substr("Hola", 1, 100)); // "ola"
// 	printf("String vacío: %s\n", ft_substr("", 0, 5));  // ""
// 	return (0);
// }
/*******************************EXPLANATION*******************************/
/*I want to allocate a memory space within a string to extract a substring, 
as if I wanted to copy a word from a sentence and paste it elsewhere.  
- s: The string from which to create the substring.  
- start: The index of the character in *s* from which to start the substring.  
- len: The maximum length of the substring.  

It allocates memory (using *malloc(3)*) and returns a substring from the 
string src. The substring starts at the index start and has a maximum 
length of len.  
Returns the resulting substring, or NULL if memory allocation fails.*/