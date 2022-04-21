#include "../include/push_swap.h"

void	ps_ssg(t_ps **stack)
{
	t_ps	*current;
	t_ps	*temp;
	int		j;
	int		m;

	current = *stack;
	j = 0;
	m= 0;
	printf("Sorted Stack : ");
	while (current != NULL)
	{
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

int	sizing_stack(char **args)
{
	int	size;

	size = 1;
	while (args[size])
		size++;
	return (size);

}
int	main(int argc, char *argv[])
{
	t_stk	*stk;
	// t_ps	*stk_a_temp;
	char		**args;

	if (argc <= 1)
		ps_error("Error : No Args !");
	stk = malloc(sizeof(t_stk));
	if (!stk)
		return (1);
	stk->a = malloc(sizeof(t_ps));
	stk->b = malloc(sizeof(t_ps));
	if (!stk->a || !stk->b)
		return (1);
	stk->b = NULL;
	args = cheak_args(argc, argv);
	stk->a = manage_args(args);
	ps_indexing(&stk->a);
	// stk_a_temp = stk->a;
	// ps_print(stk_a_temp);
	ps_sorte(&stk, sizing_stack(args));
	// ps_ssg(&stk->a);
	return (0);
}