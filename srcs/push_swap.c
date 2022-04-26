/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:10:05 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/26 06:53:19 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_tab(char **tab)
{
	int		idx;

	idx = -1;
	while (tab[++idx])
		free(tab[idx]);
	free(tab);
}

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
	int		index;
	t_ps	*now;

	if (argc <= 1)
		exit(1);
	stk = malloc(sizeof(t_stk));
	if (!stk)
		return (1);
	// stk->a = malloc(sizeof(t_ps));
	// stk->b = malloc(sizeof(t_ps));
	// if (!stk->a || !stk->b)
	// 	return (1);
	args = cheak_args(argc, argv);
	stk->a = manage_args(args);
	ps_indexing(&stk->a);
	index = sizing_stack(args);
	free_tab(args);
	ps_sorte(&stk, index);
	while (stk->a)
	{
		now = stk->a->next;
		free(stk->a);
		stk->a = now;		
	}
	free(stk);
	// system("leaks push_swap");
	
	return (0);
}
