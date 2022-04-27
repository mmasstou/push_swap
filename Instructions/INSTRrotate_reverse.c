/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   INSTRrotate_reverse.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:24:06 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/27 01:54:34 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_stk *stk, int print_option)
{
	if (sll_lstsize((stk->a)) > 1)
	{
		sll_retate_reverse(&(stk->a));
		if (print_option == P_YES)
			ft_putendl_fd("rra", 1);
	}
}

void	rrb(t_stk *stk, int print_option)
{
	if (sll_lstsize((stk->b)) > 1)
	{
		sll_retate_reverse(&(stk->b));
		if (print_option == P_YES)
			ft_putendl_fd("rrb", 1);
	}
}

void	rrr(t_stk *stk, int print_option)
{
	rrb(stk, P_NO);
	rra(stk, P_NO);
	if (print_option == P_YES)
		ft_putendl_fd("rrr", 1);
}
