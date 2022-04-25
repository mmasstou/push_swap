/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SLL_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 22:07:29 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 22:07:54 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	sll_swap(t_ps **head)
{
	t_ps	*j;

	if (sll_lstsize(*head) <= 1)
		return ;
	j = (*head)->next;
	(*head)->next = j->next;
	sll_lstadd_front(head, j);
}
