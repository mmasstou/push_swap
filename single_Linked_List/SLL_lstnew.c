/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SLL_lstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 22:05:17 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 22:05:20 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

t_ps	*sll_lstnew(int content, int key)
{
	t_ps	*newelement;

	newelement = (t_ps *)malloc(sizeof(t_ps));
	if (!newelement)
		return (NULL);
	newelement->data = content;
	newelement->key = key;
	newelement->next = NULL;
	return (newelement);
}
