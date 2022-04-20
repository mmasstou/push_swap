#include "../include/push_swap.h"
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
	int		pos;

	pos = 1;
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
		else if ((temp->key < temp->next->key) && (temp->next->key > temp->next->next->key))
		{
			sa(*stk);
			ra(*stk);
		}
		else
			rra(*stk);
	}
}
void	ps_sorte(t_stk **stk, int argc)
{
	if (argc == 2)
		ps_sorte_tow(stk);
	if (argc == 3)
		ps_sorte_three(stk);
	if (is_sorted((*stk)->a))
		exit(0);
}