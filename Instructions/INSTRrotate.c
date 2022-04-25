/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   INSTRrotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:24:28 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:26:17 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_stk *stk, int print_option)
{
	sll_retate(&(stk->a));
	if (print_option == P_YES)
		ft_putendl_fd("ra", 1);
}

void	rb(t_stk *stk, int print_option)
{
	sll_retate(&(stk->b));
	if (print_option == P_YES)
		ft_putendl_fd("rb", 1);
}

void	rr(t_stk *stk, int print_option)
{
	sll_retate(&(stk->b));
	sll_retate(&(stk->a));
	if (print_option == P_YES)
		ft_putendl_fd("rr", 1);
}
