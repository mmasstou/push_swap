#include "../include/push_swap.h"
static void	three_else(t_stk **stk)
{
	t_ps	*temp;

	temp = (*stk)->a;
	if ((temp->key > temp->next->key) && \
		(temp->next->key < temp->next->next->key))
		ra(*stk, P_YES);
	else if ((temp->key < temp->next->key) && \
		(temp->key < temp->next->next->key) && \
			(temp->next->key > temp->next->next->key))
	{
		sa(*stk, P_YES);
		ra(*stk, P_YES);
	}
	else if ((temp->key < temp->next->key) && \
		(temp->key > temp->next->next->key) && 
			(temp->next->key > temp->next->next->key))
		rra(*stk, P_YES);
}

void	ps_sorte_three(t_stk **stk)
{
	t_ps	*temp;

	temp = (*stk)->a;
	if (!is_sorted((*stk)->a))
	{
		if ((temp->key > temp->next->key) && \
			(temp->key < temp->next->next->key))
			sa(*stk, P_YES);
		else if ((temp->key > temp->next->key) && \
			(temp->key > temp->next->next->key) && \
				(temp->next->key > temp->next->next->key))
		{
			sa(*stk, P_YES);
			rra(*stk, P_YES);
		}
		three_else(stk);
	}
}