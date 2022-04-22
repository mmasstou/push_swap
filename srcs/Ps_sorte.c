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
		// printf("%s%d%s\n",_RED,stk_a_temp->key,_END);

		printf("%s[%d] index [%d]%s\n",_YELLOW,stk_a_temp->data,stk_a_temp->key, _END);

		// if (stk_a_temp->prev == NULL && stk_a_temp->next != NULL)
		// {
		// 	printf("prev = NULL\n%s +> data = %d%s\n%s +> key = %d%s\nnext = %d\n-------------------------\n",_RED, stk_a_temp->data,_END,_YELLOW, stk_a_temp->key,_END, stk_a_temp->next->data);
		// }
		// else if (stk_a_temp->next == NULL && stk_a_temp->prev != NULL)
		// {
		// 	printf("prev = %d\n%s +> data = %d%s\n%s +> key = %d%s\nnext = NULL\n-------------------------\n", stk_a_temp->prev->data,_RED, stk_a_temp->data,_END,_YELLOW, stk_a_temp->key,_END);
		// }
		// else if (stk_a_temp->next == NULL && stk_a_temp->prev == NULL)
		// {
		// 	printf("prev = NULL\n%s +> data = %d%s\n%s +> key = %d%s\nnext = NULL\n-------------------------\n",_RED, stk_a_temp->data,_END,_YELLOW, stk_a_temp->key,_END);
		// }
		// else	
		// 	printf("prev = %d\n%s +> data = %d%s\n%s +> key = %d%s\nnext = %d\n-------------------------\n", stk_a_temp->prev->data,_RED, stk_a_temp->data,_END,_YELLOW, stk_a_temp->key,_END, stk_a_temp->next->data);
		stk_a_temp = stk_a_temp->next;
	}
}
int		is_sorted(t_ps *stk)
{
	t_ps *temp;
	int		index;

	temp = stk;
	index = 0;
	while (temp)
	{
		if (temp->key == index)
		{
			index++;
			temp = temp->next;
		}
		else
			return (0);
	}
	return (1);
}

void	ps_sorte_tow(t_stk **stk)
{
	if (!is_sorted((*stk)->a))
		sa(*stk);
}

void	ps_sorte_three(t_stk **stk)
{
	t_ps	*temp;

	temp = (*stk)->a;
	if (!is_sorted((*stk)->a))
	{
		if ((temp->key > temp->next->key) && (temp->key < temp->next->next->key))
			sa(*stk);
		else if ((temp->key > temp->next->key) && (temp->key > temp->next->next->key) && (temp->next->key > temp->next->next->key))
		{
			sa(*stk);
			rra(*stk);
		}
		else if ((temp->key > temp->next->key) && (temp->next->key < temp->next->next->key))
			ra(*stk);
		else if ((temp->key < temp->next->key) && (temp->key < temp->next->next->key) &&(temp->next->key > temp->next->next->key))
		{
			sa(*stk);
			ra(*stk);
		}
		else if ((temp->key < temp->next->key) && (temp->key > temp->next->next->key) && (temp->next->key > temp->next->next->key))
			rra(*stk);
	}
}

// ps_sorte_four
void	ps_sorte_four(t_stk **stk)
{
	int		pos;
	int		index;

	index = get_index_of_min_value((*stk)->a);
	pos = position_of_key((*stk)->a, index);
	if (pos == 1)
	{
		pb(*stk);
		ps_sorte_three(stk);
		pa(*stk);
	}
	if (pos == 2)
	{
		sa(*stk);
		pb(*stk);
		ps_sorte_three(stk);
		pa(*stk);
	}
	else if (pos == 3)
	{
		ra(*stk);
		sa(*stk);
		pb(*stk);
		ps_sorte_three(stk);
		pa(*stk);
	}
	else if (pos == 4)
	{
		rra(*stk);
		pb(*stk);
		ps_sorte_three(stk);
		pa(*stk);
	}
	
}

void	ps_sorte_five(t_stk **stk)
{
	int		pos;
	int		index;

	index = get_index_of_min_value((*stk)->a);
	pos = position_of_key((*stk)->a, index);
	if (pos == 1)
	{
		pb(*stk);
		ps_sorte_four(stk);
		pa(*stk);
	}
	if (pos == 2)
	{
		sa(*stk);
		pb(*stk);
		ps_sorte_four(stk);
		pa(*stk);
	}
	else if (pos == 3)
	{
		ra(*stk);
		sa(*stk);
		pb(*stk);
		ps_sorte_four(stk);
		pa(*stk);
	}
	else if (pos == 4)
	{
		rra(*stk);
		rra(*stk);
		pb(*stk);
		ps_sorte_four(stk);
		pa(*stk);
	}
	else if (pos == 5)
	{
		rra(*stk);
		pb(*stk);
		ps_sorte_four(stk);
		pa(*stk);
	}
	
}

// ps_sorte_else
int	create_range(int argc)
{
	if (argc <= 250)
		return (15);
	return (25);
}

t_env	*create_env(int argc)
{
	t_env	*env;

	env = (t_env *)malloc(sizeof(t_env));
	if (!env)
		ps_error("Error");
	env->s_index = 1;
	env->e_index = create_range(argc);

	return (env);
}

// void	ps_sorte_else(t_stk **stk, int argc)
// {
// 	t_ps	*temp;
// 	t_ps	*tempb;
// 	t_env	*env;
// 	int		index;


// 	// ps_print((*stk)->a);
// 	env = create_env(argc);
// 	// temp = (*stk)->a;
// 	temp = (*stk)->a;
// 	tempb = (*stk)->b;
// 	index = dll_size(temp);
// 	while (index != 0)
// 	{
// 		printf("size +++++++++++++++++++++++%d\n", index);
// 		if (temp->key < env->s_index)
// 		{
// 			pb(*stk);
// 			rb(*stk);
// 			env->s_index++;
// 			index--;
// 		}
// 		else if (temp->key <= (env->s_index + env->e_index))
// 		{
// 			pb(*stk);
// 			index--;
// 			env->s_index++;
// 		}
// 		else
// 			ra(*stk);
// 		// if (dll_size(tempb) > 1)
// 		// {
// 		// 	if (tempb->key < tempb->next->key)
// 		// 		sb(*stk);
// 		// }
// 			// temp = temp->next;
// 	}
// 	ps_print((*stk)->b);
// 	env->middle = get_middle((*stk)->b);
// 	env->size_stk_b = dll_size((*stk)->b);
// 	// env->key_position = -1;
// 	env->key_position = 1;
// 	// printf("%d--%d\n", env->middle, env->size_stk_b);
// 	while (dll_size((*stk)->b) != 0)
// 	{
// 		temp = (*stk)->b;
// 		while (temp->key != env->middle)
// 		{
// 			if ((temp->key - 1) == env->size_stk_b)
// 			{
// 				break;
// 			}
// 			env->key_position++;
// 			temp = temp->next;
// 		}
// 		if (env->key_position != 1)
// 			break;
// 	}
// 	printf("%d--%d --- %d\n", env->middle, env->size_stk_b, env->key_position);
// 	ps_error("SATAC B");

// }
int	find_position_key(t_ps  *stk, int key)
{
	int	pos;
	t_ps	*temp;

	temp = stk;
	pos = 0;
	while (temp != NULL)
	{
		if (temp->key == key)
			break;
		pos++;
		temp = temp->next;
	}
	return (pos);
}

void	ps_sorte_else(t_stk **stk, int argc)
{
	t_ps	*temp;
	t_env	*env;
	int		m;
	// int	pos;



	// ps_print((*stk)->a);
	env = create_env(argc);
	// temp = (*stk)->a;
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

		if (env->max_key_position < env->middle_position)
		{
			m = env->max_key_position;
			while (m != 0)
			{
				rb(*stk);
				m--;
			}
			pa(*stk);
		}
		else if (env->max_key_position >= env->middle_position)
		{
			m = env->size_stk_b - env->max_key_position + 1;
			while (m != 0)
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
	// printf("Stack a\n");
	// ps_print((*stk)->a);

	// printf("%d--%d\n", env->middle, 50);
	// while (dll_size((*stk)->b) != 0)
	// {
	// 	temp = (*stk)->b;
	// 	while (temp->key != env->middle)
	// 	{
	// 		if ((temp->key - 1) == env->size_stk_b)
	// 		{
	// 			break;
	// 		}
	// 		env->key_position++;
	// 		temp = temp->next;
	// 	}
	// 	if (env->key_position != 1)
	// 		break;
	// }
	// printf("%d--%d --- %d\n", env->middle, env->size_stk_b, env->max_key_position);
	// ps_error("SATAC B");

}

void	ps_sorte(t_stk **stk, int argc)
{
	if (!is_sorted((*stk)->a))
	{
		if (argc == 2)
			ps_sorte_tow(stk);
		else if (argc == 3)
			ps_sorte_three(stk);
		else if (argc == 4)
			ps_sorte_four(stk);
		else if (argc == 5)
			ps_sorte_five(stk);
		else
			ps_sorte_else(stk, argc);
		// if (is_sorted((*stk)->a))
		// 	exit(0);
	}
	else
		exit(0);
}