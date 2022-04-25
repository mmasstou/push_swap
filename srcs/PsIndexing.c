/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PsIndexing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:48:24 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:22:09 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ps_indexing(t_ps **stack)
{
	t_ps	*current;
	t_ps	*temp;
	int		i;

	current = *stack;
	while (current != NULL)
	{
		i = 0;
		temp = *stack;
		while (temp != NULL)
		{
			if (current->data > temp->data)
				i++;
			temp = temp->next;
		}
		current->key = i;
		current = current->next;
	}
}
