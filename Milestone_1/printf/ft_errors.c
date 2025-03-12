/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:41:06 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/12 10:42:44 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_errors(char const *str, ...)
{
	va_list	args;
	int		count;

	count = 1;
	va_start(args, str);
	while (va_arg(args, const char *) != NULL)
		count++;
	va_end(args);
	printf("count: %d", count);
	return (count);
}
