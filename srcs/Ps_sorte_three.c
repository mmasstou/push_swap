#include "../include/push_swap.h"

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