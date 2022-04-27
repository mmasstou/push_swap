/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_instructions_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:09:09 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/27 02:43:48 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	print_result(char *result)
{
	ft_printf("%s%s%s%s%s\n", _REV,_GREEN, _BOLD, result, _END);
	// ft_putendl_fd(result, 1);
	exit(0);
}

void	manage_instructions(t_stk **stk)
{
	char	*buffer;
	int		size;
	t_ps	*stack;

	size = sll_lstsize((*stk)->a);
	(*stk)->b = NULL;
	while (1)
	{
		buffer = get_next_line(0);
		if (buffer == NULL)
		{
			free(buffer);
			break ;
		}
		exicute_instraction(stk, buffer);
		free(buffer);
	}
	stack = (*stk)->a;
	ps_indexing(&stack);
	if (is_sorted((*stk)->a) && size == sll_lstsize((*stk)->a))
		print_result("OK");
	else
		print_result("KO");
}
