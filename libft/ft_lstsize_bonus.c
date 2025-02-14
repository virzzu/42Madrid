/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:43:31 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/13 15:43:00 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *first)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = first;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
