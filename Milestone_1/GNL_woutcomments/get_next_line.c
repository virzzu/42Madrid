/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:37:08 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/06 16:49:53 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read(int fd, char *buffy)
{
	char	*temp;
	char	*joined;
	ssize_t	bytes_read;

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (free(buffy), buffy = NULL, NULL);
	bytes_read = 1;
	while (bytes_read != 0)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(temp), free(buffy), NULL);
		if (bytes_read == 0)
			break ;
		temp[bytes_read] = '\0';
		joined = ft_strjoin(buffy, temp);
		if (!joined)
			return (free(temp), free(buffy), NULL);
		buffy = joined;
		if (ft_search(buffy) == 1)
			return (free(temp), buffy);
	}
	return (free(temp), buffy);
}

static char	*ft_before_endl(char *buffy)
{
	char	*before_endl;
	int		i;

	i = 0;
	if (!buffy[i])
		return (NULL);
	while (buffy[i] && buffy[i] != '\n')
		i++;
	before_endl = malloc(sizeof(char) * (i + 2));
	if (!before_endl)
		return (free(buffy), buffy = NULL, NULL);
	i = 0;
	while (buffy[i] && buffy[i] != '\n')
	{
		before_endl[i] = buffy[i];
		i++;
	}
	if (buffy[i] == '\n')
	{
		before_endl[i] = '\n';
		before_endl[i + 1] = '\0';
	}
	else
		before_endl[i] = '\0';
	return (before_endl);
}

static char	*ft_after_endl(char *buffy)
{
	char	*after_endl;
	int		i;
	int		j;

	i = 0;
	if (!buffy[i])
		return (free(buffy), NULL);
	while (buffy[i] && buffy[i] != '\n')
		i++;
	after_endl = malloc(sizeof(char) * (ft_strlen(buffy) - i + 1));
	if (!after_endl)
		return (free(buffy), NULL);
	j = 0;
	if (buffy[i] != '\0')
		i++;
	while (buffy[i])
		after_endl[j++] = buffy[i++];
	after_endl[j] = '\0';
	free(buffy);
	buffy = NULL;
	return (after_endl);
}

char	*get_next_line(int fd)
{
	static char	*buffy;
	char		*line;

	if (!(fd >= 0 && BUFFER_SIZE > 0 && fd < FOPEN_MAX))
		return (NULL);
	buffy = ft_read(fd, buffy);
	if (!buffy)
		return (NULL);
	line = ft_before_endl(buffy);
	buffy = ft_after_endl(buffy);
	return (line);
}
