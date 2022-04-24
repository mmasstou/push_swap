#include "../include/push_swap.h"

void	manage_instructions(t_stk **stk)
{
	char	*buffer;
	int		size;
	t_ps	*stack;

	size = sll_lstsize((*stk)->a);
	while (1)
	{
		buffer = get_next_line(0);
		if (buffer == NULL)
			break ;
		if (check_instruction(buffer) == 1)
			ps_error("Error");
		exicute_instraction(stk, buffer);
	}
	stack = (*stk)->a;
	ps_indexing(&stack);
	stack = (*stk)->a;
	if (is_sorted(stack) && size == sll_lstsize(stack))
	{
		ft_putendl_fd("OK", 1);
		exit(0);
	}
	else
	{
		ft_putendl_fd("KO", 1);
		exit(1);
	}
}