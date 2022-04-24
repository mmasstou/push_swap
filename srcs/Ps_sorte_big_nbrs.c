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
	t_ps	*temp;
	t_env	*env;
	int		m;
	// int	pos;



	// ps_print((*stk)->a);
	env = create_env(argc);
	// temp = (*stk)->a;
	env->size_stk_a = dll_size((*stk)->a) - 1;
	while (dll_size((*stk)->a) != 0)
	{
		temp = (*stk)->a;
		while (temp != NULL)
		{
			if (temp->key <= env->s_index)
			{
				pb(*stk);
				rb(*stk);
				env->s_index++;
			}
			else if (temp->key <= (env->s_index + env->e_index))
			{
				pb(*stk);
				env->s_index++;
			}
			else
				ra(*stk);
			temp = temp->next;
		}
		if (dll_size((*stk)->b) > 1)
		{
			if ((*stk)->b->key < (*stk)->b->next->key)
				sb(*stk);
		}
	}
	// printf("Stack b\n");

	// ps_print((*stk)->b);
	// ps_print((*stk)->a);
	temp = (*stk)->b;
	// env->size_stk_b = dll_size((*stk)->b);
	env->size_stk_b = dll_size((*stk)->b) - 1;
	while (env->size_stk_b >= 0)
	{
		env->middle = get_middle((*stk)->b);
		if (env->middle == -1)
			break;
		env->middle_position = find_position_key((*stk)->b, env->middle);
		env->max_key_position = find_position_key((*stk)->b, env->size_stk_b);
		// printf("env->middle = |%d ****env->middle_position = |%d \nkey = |%d ****key_position = |%d\n",env->middle, env->middle_position, env->size_stk_b, env->max_key_position);
		if (env->max_key_position <= env->middle_position)
		{
			m = env->max_key_position;
			while (m > 0)
			{
				rb(*stk);
				m--;
			}
			pa(*stk);
		}
		else if (env->max_key_position > env->middle_position)
		{
			m = env->size_stk_b - env->max_key_position;
			while (m >= 0)
			{
				rrb(*stk);
				m--;
			}
			pa(*stk);	
		}
		env->size_stk_b--;
		// ps_print((*stk)->b);
		// p_print((*stk)->a);
	}
}