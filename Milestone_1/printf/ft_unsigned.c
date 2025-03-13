/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginia <virginia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:35:54 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/03/13 13:17:27 by virginia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned int ui)
{
	int	len;

	len = 0;
	while (ui != 0)
	{
		ui /= 10;
		len++;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int ui)
{
	int				len;
	char			*str;

	len = ft_count(ui);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (ui == 0)
		str[0] = '0';
	while (ui > 0)
	{
		str[len] = (ui % 10) + '0';
		ui = ui / 10;
		len--;
	}
	return (str);
}

int	ft_unsigned(unsigned int ui)
{
	char	*num;

	if (ui < 0)
		return (-1);
	if (ui == 0)
		return(write(1, "0", 1));
	else
	{
		num = ft_uitoa(ui);
		if (num == NULL)
			return (-1);
		if(ft_string(num) < 0)
			return(free(num), -1);
		free(num);
	}
	return (ft_count(ui));
}
