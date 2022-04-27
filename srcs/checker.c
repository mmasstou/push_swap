/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:42:33 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/27 01:55:37 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stk	*stk;
	char	**args;
	t_ps	*now;

	if (argc <= 1)
		exit(1);
	stk = malloc(sizeof(t_stk));
	if (!stk)
		return (1);
	args = cheak_args(argc, argv);
	stk->a = manage_args(args);
	manage_instructions(&stk);
	free_tab(args);
	while (stk->a)
	{
		now = stk->a->next;
		free(stk->a);
		stk->a = now;
	}
	free(stk);
	return (0);
}
