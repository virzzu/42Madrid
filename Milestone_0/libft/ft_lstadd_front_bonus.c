/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:46:08 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/13 13:40:42 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **first, t_list *new)
{
	if (first && new)
	{
		new->next = *first;
		*first = new;
	}
}

/*************************DESCRIPTION**************************************/
/* Añade el nodo ’new’ al principio de la lista ’lst’. */
