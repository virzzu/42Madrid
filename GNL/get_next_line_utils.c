/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:19:45 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/14 12:43:16 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3_len;
	
	if (!s1 || !s2)
		return (NULL);
	s3_len = (strlen(s1) + strlen(s2));
	s3 = malloc(sizeof(char) * (s3_len + 1));
	if (!s3)
		return (NULL);
	s3[0] = '\0';
	if (strlen(s1) == 0)
		strncat(s3, s2, s3_len + 1);
	else
	{
		strncpy(s3, s1, strlen(s1) + 1);
		strncat(s3 + strlen(s1), s2, s3_len + 1);
	}
	s3[s3_len] = '\0';
	return (s3);
}
