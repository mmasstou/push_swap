/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ps_positionOfKey.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:09:24 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:18:39 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	position_of_key(t_ps *stack, int index)
{
	int		pos;
	t_ps	*temp;

	temp = stack;
	pos = 1;
	while (temp != NULL)
	{
		if (temp->key == index)
			break ;
		pos++;
		temp = temp->next;
	}
	return (pos);
}
