/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:38:15 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/01/31 16:56:52 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t len)
{
	size_t			num;
	unsigned char	*str;

	num = 0;
	str = ptr;
	while (num < len)
	{
		*str = 0;
		str++;
		num++;
	}
}

/****************************MAIN************************************/
// int main()
// {
//     char buffer[10] = "HolaMundo";
//     printf("Antes de ft_bzero: %s\n", buffer);
//     // Inicializamos los primeros 5 bytes a 0
//     ft_bzero(buffer, 5);
//     // Después de ft_bzero
//     printf("Después de ft_bzero: %s\n", buffer); 
// // Solo mostrará 'Mundo' (los primeros bytes son null)
//     return 0;
// }
/***************************EXPLANATION******************************/
