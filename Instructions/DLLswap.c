
void	sa(t_stk *stk)
{
	if (dll_size(stk->a) <= 1)
		return ;
	dll_swap(&stk->a);
	ft_putendl_fd("sa",1);
}