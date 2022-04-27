/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   INSTRpush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:24:00 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/27 01:54:08 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_stk **stk, int print_option)
{
	t_ps	*head;
	t_ps	*temp;

	if ((*stk)->b == NULL)
		return ;
	temp = (*stk)->b;
	head = (*stk)->b->next;
	temp->next = NULL;
	sll_lstadd_front(&(*stk)->a, temp);
	(*stk)->b = head;
	if (print_option == P_YES)
		ft_putendl_fd("pa", 1);
}

void	pb(t_stk **stk, int print_option)
{
	t_ps	*head;
	t_ps	*temp;

	if ((*stk)->a == NULL)
		return ;
	temp = (*stk)->a;
	head = (*stk)->a->next;
	temp->next = NULL;
	sll_lstadd_front(&(*stk)->b, temp);
	(*stk)->a = head;
	if (print_option == P_YES)
		ft_putendl_fd("pb", 1);
}
