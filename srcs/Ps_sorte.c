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
	t_ps	*temp;
	int		pos;
	int		index;

	temp = (*stk)->a;
	pos = 1;
	index = temp->key;
	while (temp != NULL)
	{
		if (temp->key < index)
			index = temp->key;
		temp = temp->next;
	}
	temp = (*stk)->a;
	while (temp != NULL)
	{
		if (temp->key == index)
			break;
		pos++;
		temp = temp->next;
	}
	if (pos == 1)
	{
		pb(*stk);
		ps_sorte_three(stk);
		pa(*stk);
	}
	else if (pos == 2)
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
	t_ps	*temp;
	int		pos;
	int		index;

	temp = (*stk)->a;
	pos = 1;
	index = temp->key;
	while (temp != NULL)
	{
		if (temp->key < index)
			index = temp->key;
		temp = temp->next;
	}
	temp = (*stk)->a;
	while (temp != NULL)
	{
		if (temp->key == index)
			break;
		pos++;
		temp = temp->next;
	}
	if (pos == 1)
	{
		pb(*stk);
		ps_sorte_four(stk);
		pa(*stk);
	}
	else if (pos == 2)
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

void	ps_sorte(t_stk **stk, int argc)
{
	if (argc == 2)
		ps_sorte_tow(stk);
	else if (argc == 3)
		ps_sorte_three(stk);
	else if (argc == 4)
		ps_sorte_four(stk);
	else if (argc == 5)
		ps_sorte_five(stk);
	if (is_sorted((*stk)->a))
		exit(0);
}