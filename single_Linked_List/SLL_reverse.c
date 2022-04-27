/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SLL_reverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 22:05:50 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/27 00:47:10 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	sll_retate(t_ps **head)
{
	t_ps	*temp;

	temp = *head;
	if (sll_lstsize(temp) > 1)
	{
		sll_lstlast(*head)->next = temp;
		*head = (*head)->next;
		temp->next = NULL;
	}
}

void	sll_retate_reverse(t_ps **head)
{
	t_ps	*temp;
	t_ps	*last;

	if (sll_lstsize(*head) > 1)
	{
		last = (*head);
		temp = sll_lstlast(*head);
		while (last->next->next != NULL)
			last = last->next;
		last->next = NULL;
		sll_lstadd_front(head, temp);
	}
}
