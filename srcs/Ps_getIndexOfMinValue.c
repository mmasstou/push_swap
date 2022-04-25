/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ps_getIndexOfMinValue.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:09:17 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:17:09 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_index_of_min_value(t_ps *stack)
{
	int		index;
	t_ps	*temp;

	temp = stack;
	index = temp->key;
	while (temp != NULL)
	{
		if (temp->key < index)
			index = temp->key;
		temp = temp->next;
	}
	return (index);
}
