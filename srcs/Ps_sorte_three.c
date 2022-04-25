/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ps_sorte_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:09:45 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:21:24 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	three_else(t_stk **stk)
{
	t_ps	*temp;

	temp = (*stk)->a;
	if ((temp->key > temp->next->key) && \
		(temp->next->key < temp->next->next->key))
		ra(*stk, P_YES);
	else if ((temp->key < temp->next->key) && \
		(temp->key < temp->next->next->key) && \
			(temp->next->key > temp->next->next->key))
	{
		sa(*stk, P_YES);
		ra(*stk, P_YES);
	}
	else if ((temp->key < temp->next->key) && \
		(temp->key > temp->next->next->key) && \
			(temp->next->key > temp->next->next->key))
		rra(*stk, P_YES);
}

void	ps_sorte_three(t_stk **stk)
{
	t_ps	*temp;

	temp = (*stk)->a;
	if (!is_sorted((*stk)->a))
	{
		if ((temp->key > temp->next->key) && \
			(temp->key < temp->next->next->key))
			sa(*stk, P_YES);
		else if ((temp->key > temp->next->key) && \
			(temp->key > temp->next->next->key) && \
				(temp->next->key > temp->next->next->key))
		{
			sa(*stk, P_YES);
			rra(*stk, P_YES);
		}
		three_else(stk);
	}
}
