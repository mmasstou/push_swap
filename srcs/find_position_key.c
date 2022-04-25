/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position_key.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:46:25 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 18:48:37 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_position_key(t_ps *stk, int key)
{
	int		pos;
	t_ps	*temp;

	temp = stk;
	pos = 0;
	while (temp != NULL)
	{
		if (temp->key == key)
			break ;
		pos++;
		temp = temp->next;
	}
	return (pos);
}
