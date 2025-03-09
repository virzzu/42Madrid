/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:11:04 by virginia          #+#    #+#             */
/*   Updated: 2025/02/05 11:11:07 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	l;

	i = (ft_strlen(str));
	l = (char)c;
	if (l == '\0')
		return ((char *)&str[i]);
	while (i >= 0)
	{
		if (str[i] == l)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
/*La función ft_strrchr busca la última aparición 
de un carácter en una cad y devuelve un puntero a esa pos.*/

/***************MAIN***************/
// int main()
// {
//	const char *cad = "so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//	char buscar = '\0';
//	char *res;
//	res = strrchr(cad, buscar);
//	if (res) {
//		printf("El char '%c' está en la pos: %ld\n", buscar, res - cad);
//	} else {
//		printf("El char '%c' no está.\n", buscar);
//	}
//	return 0;
// }
/*Note: tester fails one test but original function does too*/