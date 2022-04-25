/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ps_sorte_big_nbrs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:09:31 by mmasstou          #+#    #+#             */
/*   Updated: 2022/04/25 20:19:37 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	big_nbrs_pa(t_stk **stk, t_env	*env)
{
	env->size_stk_a = sll_lstsize((*stk)->a) - 1;
	while (sll_lstsize((*stk)->a) != 0)
	{
		if ((*stk)->a->key <= env->s_index)
		{
			pb(*stk, P_YES);
			rb(*stk, P_YES);
			env->s_index++;
		}
		else if ((*stk)->a && (*stk)->a->key <= (env->s_index + env->e_index))
		{
			pb(*stk, P_YES);
			env->s_index++;
		}
		else
			ra(*stk, P_YES);
		if (sll_lstsize((*stk)->b) > 1)
		{
			if ((*stk)->b->key < (*stk)->b->next->key)
				sb(*stk, P_YES);
		}
	}
}

static void	rrb_op(t_stk **stk, t_env	*env)
{
	int	m;

	m = env->size_stk_b - env->max_key_position;
	while (m >= 0)
	{
		rrb(*stk, P_YES);
		m--;
	}
	pa(*stk, P_YES);
}

static void	rb_op(t_stk **stk, t_env	*env)
{
	int	m;

	m = env->max_key_position;
	while (m > 0)
	{
		rb(*stk, P_YES);
		m--;
	}
	pa(*stk, P_YES);
}

void	ps_sorte_big_nbrs(t_stk **stk, int argc)
{
	t_env	*env;

	env = create_env(argc);
	big_nbrs_pa(stk, env);
	env->size_stk_b = sll_lstsize((*stk)->b) - 1;
	while (env->size_stk_b >= 0)
	{
		env->middle = get_middle((*stk)->b);
		if (env->middle == -1)
			break ;
		env->middle_position = find_position_key((*stk)->b, env->middle);
		env->max_key_position = find_position_key((*stk)->b, env->size_stk_b);
		if (env->max_key_position <= env->middle_position)
			rb_op(stk, env);
		else if (env->max_key_position > env->middle_position)
			rrb_op(stk, env);
		env->size_stk_b--;
	}
}
