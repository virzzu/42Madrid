/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:33:31 by virginia          #+#    #+#             */
/*   Updated: 2025/01/31 16:59:52 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *src1, const char *src2, size_t len)
{
	size_t	i;

	i = 0;
	while (src1[i] && src2[i] && i < len)
	{
		if (src1[i] == src2[i])
			i++;
		else if (src1[i] < src2[i])
			return (-1);
		else if (src1[i] > src2[i])
			return (1);
	}
	return (0);
}

// int main() {
//     const char *cad1 = "Hola, mundo";
//     const char *cad2 = "Hola, sol";
// 	int	len = 7;
//     int resultado = ft_strncmp(cad1, cad2, len);
//     if (resultado == 0)
//         printf("Las cads son iguales en los 1º %d char.\n", len);
//     else if (resultado < 0)
//         printf("La primera cad es menor en los 1º %d caracteres.\n", len);
//     else
//         printf("La primera cad es mayor en los 1º %d caracteres.\n", len);
//     return 0;
// }