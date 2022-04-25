/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getMiddle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:49:06 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:14:47 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_middle(t_ps *stack)
{
	t_ps	*s;
	t_ps	*f;

	if (stack == NULL)
		return (-1);
	s = stack;
	f = stack;
	while (f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;
	}
	return (s->key);
}
