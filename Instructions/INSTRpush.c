/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   INSTRpush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:24:00 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:26:50 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_stk *stk, int print_option)
{
	t_ps	*temp;

	if (stk->b == NULL)
		return ;
	temp = sll_lstnew(stk->b->data, stk->b->key);
	sll_lstadd_front(&(stk->a), temp);
	sll_lstdelone(&(stk->b), DLL_FIRST);
	if (print_option == P_YES)
		ft_putendl_fd("pa", 1);
}

void	pb(t_stk *stk, int print_option)
{
	t_ps	*temp;

	if (stk->a == NULL)
		return ;
	temp = sll_lstnew(stk->a->data, stk->a->key);
	sll_lstadd_front(&(stk->b), temp);
	sll_lstdelone(&(stk->a), DLL_FIRST);
	if (print_option == P_YES)
		ft_putendl_fd("pb", 1);
}
