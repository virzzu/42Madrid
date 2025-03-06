/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:44:04 by virginia          #+#    #+#             */
/*   Updated: 2025/03/06 18:51:17 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *buffy, char *by_read)
{
	char	*joined;

	if (!buffy)
	{
		buffy = malloc(sizeof(char) * 1);
		if (!buffy || !by_read)
		{
			if (!by_read && buffy)
				free(buffy);
			return (NULL);
		}
		buffy[0] = '\0';
	}
	joined = malloc(sizeof(char) * (ft_strlen(buffy) + ft_strlen(by_read) + 1));
	if (!joined)
		return (free (by_read), free(buffy), NULL);
	joined = ft_copy(buffy, joined, by_read);
	return (free(buffy), joined);
}

int	ft_search(char *buffy)
{
	int	i;

	i = 0;
	while (buffy[i] != '\0' && buffy[i] != '\n')
		i++;
	if (buffy[i] == '\n')
		return (1);
	else
		return (0);
}

char	*ft_copy(char *buffy, char *joined, char *by_read)
{
	int	i;
	int	j;

	i = -1;
	while (buffy[++i])
		joined[i] = buffy[i];
	j = 0;
	while (by_read[j])
		joined[i++] = by_read[j++];
	joined[i] = '\0';
	return (joined);
}
