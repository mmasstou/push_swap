/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   INSTRrotate_reverse.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:24:06 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:26:37 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_stk *stk, int print_option)
{
	sll_retate_reverse(&(stk->a));
	if (print_option == P_YES)
		ft_putendl_fd("rra", 1);
}

void	rrb(t_stk *stk, int print_option)
{
	sll_retate_reverse(&(stk->b));
	if (print_option == P_YES)
		ft_putendl_fd("rrb", 1);
}

void	rrr(t_stk *stk, int print_option)
{
	sll_retate_reverse(&(stk->b));
	sll_retate_reverse(&(stk->a));
	if (print_option == P_YES)
		ft_putendl_fd("rrr", 1);
}
