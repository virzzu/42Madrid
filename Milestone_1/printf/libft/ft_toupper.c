/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:55:56 by virginia          #+#    #+#             */
/*   Updated: 2025/01/28 11:54:36 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}
// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char letra_min = 'v';
//     char letra_may;
//     letra_may = ft_toupper(letra_min);
//     printf("Letra original: %c\n", letra_min);
//     printf("Letra en mayúscula: %c\n", letra_may);
//     return 0;
// }