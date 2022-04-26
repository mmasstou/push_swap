/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SLL_lstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 04:52:25 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/26 04:52:50 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	sll_lstclear(t_ps **lst)
{
	t_ps	*temp;

	if (lst)
	{
		while (*lst != NULL)
		{
			temp = (*lst)->next;
			free(*lst);
			*lst = temp;
		}
	}
}
