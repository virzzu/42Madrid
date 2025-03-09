/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:33:31 by virginia          #+#    #+#             */
/*   Updated: 2025/02/05 11:26:34 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *src1, const char *src2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && (src1[i] != '\0' || src2[i] != '\0'))
	{
		if ((unsigned char)src1[i] == (unsigned char)src2[i])
			i++;
		else if ((unsigned char)src1[i] < (unsigned char)src2[i])
			return (-1);
		else if ((unsigned char)src1[i] > (unsigned char)src2[i])
			return (1);
	}
	return (0);
}
/*******************MAIN**********************/
// int	main(void)
// {
// 	char *s1 = "atoms\0\0\0\0";
//  	char *s2 = "atoms\0abc";
//  	size_t size = 8;
//  	int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : \
// 	((strncmp(s1, s2, size) < 0) ? -1 : 0));
//  	int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : \
// 	((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));
// 	printf("Original is: %d || ", i1);
// 	printf("Yours is: %d\n", i2);
// 	return (0);
// }
/********************DESCRRIPTION****************/
/*The ft_strncmp() function compares the two strings src1 and src2, up to
len char. The locale is not taken into account. The comparison is
done using unsigned characters.
returns an integer indicating the result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

 */