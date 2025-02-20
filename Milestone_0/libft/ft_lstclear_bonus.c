/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:49:15 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/14 10:10:32 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **node, void (*fx_delete)(void*))
{
	if (node && fx_delete)
	{
		while (node)
		{
			fx_delete(node->content);
			node = node->next;
		}	
	}
}
