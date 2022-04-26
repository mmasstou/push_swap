/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:09:06 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/26 07:22:40 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_ps	*manage_args(char **args)
{
	int		i;
	t_ps	*stk;

	i = -1;
	stk = NULL;
	while (args[++i])
	{
		sll_lstadd_back(&stk, sll_lstnew(ft_atoi(args[i]), 0));
	}
	return (stk);
}
