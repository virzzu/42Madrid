/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:07:58 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/05 14:01:05 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed = malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, len + 1);
	return (trimmed);
}

/* ********************************MAIN*********************************** */
/* int main()
{
	char *s1 = "   hello world!   ";
	char *set = " !gehld";
	char *trimmed;

	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("old string : '%s'\n", s1);
		printf("new_string : '%s'\n", trimmed);
		free(trimmed);
		return 0;
	}
	return 1;
} */
/* ****************************DESCRIPTION********************************* */
/* Remove all characters from the string 'set' at the beginning and
the end of 's1' until a character not belonging to 'set' is found.
The resulting string is returned with a malloc(3) allocation. */
