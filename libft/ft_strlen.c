/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:18:29 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/01/31 16:59:44 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	j;

	j = 0;
	while (str[j] != 0)
		j++;
	return (j);
}
// int	main(void)
// {
// 	char example[10] = "atw10mv";
// 	printf("%d\n",ft_strlen(example));
// 	return (0);
// }