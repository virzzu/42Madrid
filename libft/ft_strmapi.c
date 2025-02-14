/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgarcia- <vgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:49:25 by vgarcia-          #+#    #+#             */
/*   Updated: 2025/02/07 10:54:08 by vgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *old, char (*fx)(unsigned int, char))
{
	char				*new; //the new string we want to return
	unsigned int		i; //is used in this case for a iterator for fx (not really intuitive for me)

	i = 0; //initialize
	if (old == NULL || fx == NULL) //if void pointers are given, can't do anything. So, return NULL.
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(old) + 1)); //n bytes necessary are the len of the old string at max
	if (!new) //if mem alloc wasn't possible because of space, new isn't created
		return (NULL);
	while (old[i]) //loop to iterate over each char in the old string to pass it through the function
	{
		new[i] = fx(i, old[i]); //put the the return value of fx in the char of the i position of new
		i++; //iterate
	}
	new[i] = '\0'; //add the final \0 as new is a string and it's needed
	return (new);
}
