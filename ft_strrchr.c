/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:11:04 by virginia          #+#    #+#             */
/*   Updated: 2025/01/28 11:53:52 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	l;

	i = 0;
	l = (char)c;
	while (str[i])
		i++;
	if (l == '\0')
		return ((char *)&str[i]);
	while (i > 0)
	{
		if (str[i] == l)
			return ((char *)&str[i]);
		i--;
	}
	return ((char *)0);
}
/*La función ft_strrchr busca la última aparición 
de un carácter en una cad y devuelve un puntero a esa pos.*/
// #include <stdio.h>
// #include <string.h>
// int main() {
//     const char *cad = "Hola, mundo!";
//     char buscar = '\0';
//     char *res;
//     res = ft_strrchr(cad, buscar);
//     if (res) {
//         printf("El car '%c' está en la pos: %ld\n", buscar, res - cad);
//     } else {
//         printf("El car '%c' no está.\n", buscar);
//     }
//     return 0;
// }
