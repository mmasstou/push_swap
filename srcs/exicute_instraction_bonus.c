/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exicute_instraction_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:45:26 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/27 01:55:56 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	exicute_instraction(t_stk **stk, char *instraction)
{
	if (ft_strcmp(instraction, "ra\n") == 0)
		ra(*stk, P_NO);
	else if (ft_strcmp(instraction, "rb\n") == 0)
		rb(*stk, P_NO);
	else if (ft_strcmp(instraction, "rr\n") == 0)
		rr(*stk, P_NO);
	else if (ft_strcmp(instraction, "rra\n") == 0)
		rra(*stk, P_NO);
	else if (ft_strcmp(instraction, "rrb\n") == 0)
		rrb(*stk, P_NO);
	else if (ft_strcmp(instraction, "rrr\n") == 0)
		rrr(*stk, P_NO);
	else if (ft_strcmp(instraction, "sa\n") == 0)
		sa(*stk, P_NO);
	else if (ft_strcmp(instraction, "sb\n") == 0)
		sb(*stk, P_NO);
	else if (ft_strcmp(instraction, "ss\n") == 0)
		ss(*stk, P_NO);
	else if (ft_strcmp(instraction, "pb\n") == 0)
		pb(stk, P_NO);
	else if (ft_strcmp(instraction, "pa\n") == 0)
		pa(stk, P_NO);
	else
		ps_error("Error");
}
