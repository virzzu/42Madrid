/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:37:37 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/01 11:56:24 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	result;
	int				negative;

	i = 0;
	result = 0;
	negative = 1;
	while (str[i] >= 9 && str[i] <= 32)
		i++;
	if (str[i] == 43)
		i++;
	if (str[i] == 45)
	{
		negative = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = ((result * 10) + (str[i] - '0'));
		i++;
	}
	result = result * negative;
	return (result);
}
/***************************Description**************************/
//ft_atoi() function is used to convert a numeric string into an integer value.

// i is used to look across the src string as an iterator
// result holds the number converted as it creates
// negative represents positive or negative numbers
// If the char we're pointing to is a control ascii number or space, ignore and
// continue reading. If pointers find negative sign, hold it. 
// When the char found is between the ascii printable chars representing 
// numbers, convert them by substracting 0 (48) and save them 
// in result by passing them to the left as uds, tens, hundreds, thousends, etc.
//Not forgetting to put negative if needed by multiplyinng by 1 or -1,
//previously taken care of.
/*******************************MAIN*************************************/
// int	main(void)
// {
// 	const	char *str;	
// 	str = "   	  -35444354";
// 	printf("Number is %d\n", ft_atoi(str));
// 	printf("Atoi is %d\n", atoi(str));
// 	return(0);
// }