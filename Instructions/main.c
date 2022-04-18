#include "../include/push_swap.h"

void	ps_ssg(t_ps **stack)
{
	t_ps	*current;
	t_ps	*temp;
	int		i;
	int		j;
	int		m;

	current = *stack;
	j = 0;
	m= 0;
	printf("Sorted Stack : ");
	while (current != NULL)
	{
		i = 0;
		temp = *stack;
		while (temp != NULL)
		{
			j++;
			if (temp->key == m)
			{
				printf("(%d,%d) ",temp->data, temp->key);
				m++;
				}
			temp = temp->next;
		}
		current = current->next;
	}
	printf("\n");
	// DLL_PrintFront(*stack);
	// printf("%d\n",j);
}

int main()
{
	t_stk *stk;

	stk = (t_stk *)malloc (sizeof(t_stk));
    stk->a = dll_addnew(1337, 0);
    stk->b = dll_addnew(13379, 0);
    // printf("%d\n",head->data);
    dll_addback(stk->a, 42, 0);
    dll_addback(stk->a, 1996, 0);
    dll_addback(stk->a, 1, 0);
    dll_addback(stk->a, 2, 0);
    dll_addback(stk->a, 5, 0);
    dll_addback(stk->a, 7, 0);
    dll_addback(stk->a, 19, 0);
	dll_addback(stk->a, 4242, 0);

	//  dll_addback(stk->b, 429);
    // dll_addback(&stk->b, 19969);
    // dll_addback(&stk->b, 199);
	// dll_addback(stk->b, 42429);
	// printf("stack a:");
   	// DLL_PrintFront(stk->a);
	// printf("stack b:");
   	// DLL_PrintFront(stk->b);

	// sb(stk);
	ps_indexing(&stk->a);
	ps_ssg(&stk->a);
	
	// printf("stack a:");
   	// DLL_PrintFront(stk->a);
	// printf("stack b:");
   	// DLL_PrintFront(stk->b);

}