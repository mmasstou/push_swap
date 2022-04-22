#include "../include/push_swap.h"

void	ps_print(t_ps *stk_a)
{
	t_ps *stk_a_temp;
	int		middle;

	stk_a_temp = stk_a;
	middle = get_middle(stk_a_temp); 
	// printf("%d\n", middle);
	while (stk_a_temp != NULL)
	{
		// printf("%s%d%s\n",_RED,stk_a_temp->key,_END);
		if (stk_a_temp->key == middle)
			printf("+++> %s[%d] index [%d]%s\n",_RED,stk_a_temp->data,stk_a_temp->key, _END);
		else 
			printf("[%d] index [%d]\n",stk_a_temp->data,stk_a_temp->key);

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