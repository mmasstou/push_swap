/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:09:06 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:16:07 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_ps	*manage_args(char **args)
{
	int		i;
	t_ps	*stk;

	i = 0;
	stk = sll_lstnew(ft_atoi(args[i]), 0);
	while (args[++i])
		sll_lstadd_back(&stk, sll_lstnew(ft_atoi(args[i]), 0));
	return (stk);
}
