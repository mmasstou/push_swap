#include "../include/push_swap.h"


void	p_print(t_ps *stk_a)
{
	t_ps *stk_a_temp;
	int		middle;

	stk_a_temp = stk_a;
	middle = get_middle(stk_a_temp); 
	printf("\n");
	while (stk_a_temp != NULL)
	{
		printf("%s[%d] index [%d]%s\n",_YELLOW,stk_a_temp->data,stk_a_temp->key, _END);
		stk_a_temp = stk_a_temp->next;
	}
}


void	ps_sorte_big_nbrs(t_stk **stk, int argc)
{
	t_env	*env;
	int		m;

	env = create_env(argc);
	env->size_stk_a = sll_lstsize((*stk)->a) - 1;
	while (sll_lstsize((*stk)->a) != 0)
	{
		if ((*stk)->a->key <= env->s_index)
		{
			pb(*stk, P_YES);
			rb(*stk, P_YES);
			env->s_index++;
		}
		else if ((*stk)->a->key <= (env->s_index + env->e_index))
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
	env->size_stk_b = sll_lstsize((*stk)->b) - 1;
	while (env->size_stk_b >= 0)
	{
		env->middle = get_middle((*stk)->b);
		if (env->middle == -1)
			break;
		env->middle_position = find_position_key((*stk)->b, env->middle);
		env->max_key_position = find_position_key((*stk)->b, env->size_stk_b);
		if (env->max_key_position <= env->middle_position)
		{
			m = env->max_key_position;
			while (m > 0)
			{
				rb(*stk, P_YES);
				m--;
			}
			pa(*stk, P_YES);
		}
		else if (env->max_key_position > env->middle_position)
		{
			m = env->size_stk_b - env->max_key_position;
			while (m >= 0)
			{
				rrb(*stk, P_YES);
				m--;
			}
			pa(*stk, P_YES);	
		}
		env->size_stk_b--;
	}
}