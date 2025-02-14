/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:13:23 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/07 15:43:05 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[11];
	int		num;

	num = 0;
	if (n > -2147483648)
	{
		if (n == 0)
			write(fd, "0", 1);
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		while (n != 0)
		{
			str[num++] = n % 10 + '0';
			n /= 10;
		}
		while (num > 0)
			write(fd, &str[--num], 1);
	}
	else
		write(fd, "-2147483648", 11);
}
