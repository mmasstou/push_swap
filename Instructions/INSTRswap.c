/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   INSTRswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:24:31 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/27 01:54:54 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stk *stk, int print_option)
{
	if (sll_lstsize(stk->a) > 1)
		sll_swap(&stk->a);
	if (print_option == P_YES)
		ft_putendl_fd("sa", 1);
}

void	sb(t_stk *stk, int print_option)
{
	if (sll_lstsize(stk->b) > 1)
		sll_swap(&stk->b);
	if (print_option == P_YES)
		ft_putendl_fd("sb", 1);
}

void	ss(t_stk *stk, int print_option)
{
	sa(stk, P_NO);
	sb(stk, P_NO);
	if (print_option == P_YES)
		ft_putendl_fd("ss", 1);
}
