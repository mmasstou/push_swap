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

int	main(int argc, char *argv[])
{
	t_ps	*stk_a;
	t_ps	*stk_a_temp;
	char		**args;


	stk_a = malloc(sizeof(t_ps));
	if (!stk_a)
		return (1);
	args = cheak_args(argc, argv);
	stk_a = manage_args(args);
	stk_a_temp = stk_a;
	ps_indexing(&stk_a);
	// while (stk_a_temp != NULL)
	// {
	// 	if (stk_a_temp->prev == NULL && stk_a_temp->next != NULL)
	// 	{
	// 		printf("prev = NULL\n%s +> data = %d%s\n%s +> key = %d%s\nnext = %d\n-------------------------\n",_RED, stk_a_temp->data,_END,_YELLOW, stk_a_temp->key,_END, stk_a_temp->next->data);
	// 	}
	// 	else if (stk_a_temp->next == NULL && stk_a_temp->prev != NULL)
	// 	{
	// 		printf("prev = %d\n%s +> data = %d%s\n%s +> key = %d%s\nnext = NULL\n-------------------------\n", stk_a_temp->prev->data,_RED, stk_a_temp->data,_END,_YELLOW, stk_a_temp->key,_END);
	// 	}
	// 	else	
	// 		printf("prev = %d\n%s +> data = %d%s\n%s +> key = %d%s\nnext = %d\n-------------------------\n", stk_a_temp->prev->data,_RED, stk_a_temp->data,_END,_YELLOW, stk_a_temp->key,_END, stk_a_temp->next->data);
	// 	stk_a_temp = stk_a_temp->next;
	// }
	ps_ssg(&stk_a);
}