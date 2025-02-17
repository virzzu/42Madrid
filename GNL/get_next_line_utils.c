/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:19:45 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/17 18:22:26 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_neit_line.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3_len;
	int		i;
	int		j;
	
	if (!s1 || !s2)
		return (NULL);
	s3_len = (strlen(s1) + strlen(s2));
	s3 = malloc(sizeof(char) * (s3_len + 1));
	if (!s3)
		return (NULL);
	s3[0] = '\0';
	i = 0;
	while (s1[i] != 0)
		s3[i++] = s1[i++];
	j = 0;
	while (s2[j])
		s3[i++] = s2[j++];
	s3[s3_len] = '\0';
	return (s3);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
