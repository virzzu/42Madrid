/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:29:01 by virginia          #+#    #+#             */
/*   Updated: 2025/03/06 19:08:07 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
#  define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
// header for read()
# include <stdlib.h>
// header for malloc() and free()
# include <stdio.h>
// header for FOPEN_MAX

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line_bonus(int fd);
char	*get_next_line(int fd); //para pasar el paco
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
int		ft_search(char *buffy);
char	*ft_copy(char *buffy, char *joined, char *by_read);

#define get_next_line_bonus get_next_line //para pasar el paco



#endif