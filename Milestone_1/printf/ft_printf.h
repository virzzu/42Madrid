/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:42:04 by virginia          #+#    #+#             */
/*   Updated: 2025/03/12 22:40:40 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
//for variadic arg
# include <unistd.h>
//for malloc
# include <stdlib.h>
//for free


int		ft_printf(char const *str, ...);
int		ft_pointer(size_t ptr);
int		ft_putchar(char c);
int		ft_percentage(int c);
int		ft_string(char	*str);
int		ft_number(int n);
int		ft_hexalen(size_t ptr);
int		ft_unsigned(unsigned int ui);
int		ft_hexa(unsigned long long dec, char type);
void	ft_dec_to_hex(unsigned long long dec);
int		ft_printf_hex(unsigned long long dec, char type);

#endif