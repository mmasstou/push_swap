#include "../include/push_swap.h"
static void	print_result(char *result)
{
	ft_putendl_fd(result, 1);
	exit(0);
}
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
	if (is_sorted((*stk)->a) && size == sll_lstsize((*stk)->a))
		print_result("OK");
	else
		print_result("KO");
}