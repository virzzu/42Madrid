/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:18:41 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/12 21:20:10 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr(char *str, unsigned int num, int index)
{
	while (num > 0)
	{
		str[index] = (num % 10) + '0';
		num = num / 10;
		index--;
	}
}

static char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	num;

	len = ft_count(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = n * -1;
	}
	else
		num = n;
	ft_putnbr(str, num, len);
	return (str);
}

int	ft_number(int n)
{
	char	*num;

	num = ft_itoa(n);
	write(1, num, ft_count(n));
	free(num);
	return (ft_count(n));
}
