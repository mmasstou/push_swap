/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:10:05 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:22:46 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sizing_stack(char **args)
{
	int	size;

	size = 1;
	while (args[size])
		size++;
	return (size);
}

int	main(int argc, char *argv[])
{
	t_stk	*stk;
	char	**args;

	if (argc <= 1)
		exit(1);
	stk = malloc(sizeof(t_stk));
	if (!stk)
		return (1);
	stk->a = malloc(sizeof(t_ps));
	stk->b = malloc(sizeof(t_ps));
	if (!stk->a || !stk->b)
		return (1);
	stk->b = NULL;
	args = cheak_args(argc, argv);
	stk->a = manage_args(args);
	ps_indexing(&stk->a);
	ps_sorte(&stk, sizing_stack(args));
	return (0);
}
