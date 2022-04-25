/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SLL_lstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:31:11 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 22:04:39 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	sll_lstdelone(t_ps	**lst, char pos)
{
	t_ps	*temp;

	if (sll_lstsize(*lst) > 0)
	{
		if ((*lst)->next == NULL)
			*lst = NULL;
		else
		{
			if (pos == DLL_FIRST)
			{
				temp = (*lst)->next;
				*lst = temp;
			}
			if (pos == DLL_LAST)
			{
				temp = *lst;
				while (temp->next->next != NULL)
					temp = temp->next;
				temp->next = NULL;
			}
		}
	}
}
