#include "../include/push_swap.h"



int main(int argc, char *argv[])
{
	t_stk *stk;
	int i;

	i = 1;

	stk = (t_stk *)malloc (sizeof(t_stk));
	argc = 5;
	cheak_args(argc, argv);
	manage_args(argv);
	while (i <= argc)
	{
		cheack_double_value(stk, ft_atoi(argv[i]));
    	dll_addback(stk->a, ft_atoi(argv[i]), 0);
		i++;
	}
    // stk->a = dll_addnew(1337, 0);
    stk->b = dll_addnew(13379, 0);
    // printf("%d\n",head->data);
	// cheack_double_value(stk, 42);
    // dll_addback(stk->a, 42, 0);
	// cheack_double_value(stk, 1996);
    // dll_addback(stk->a, 1996, 0);
	// cheack_double_value(stk, 1);
    // dll_addback(stk->a, 1, 0);
	// cheack_double_value(stk, 2);
    // dll_addback(stk->a, 2, 0);
	// cheack_double_value(stk, 5);
    // dll_addback(stk->a, 5, 0);
	// cheack_double_value(stk, 7);
    // dll_addback(stk->a, 7, 0);
	// cheack_double_value(stk, 19);
    // dll_addback(stk->a, 19, 0);
	// cheack_double_value(stk, 4242);
	// dll_addback(stk->a, 4242, 0);
	// cheack_double_value(stk, 00005);
	// dll_addback(stk->a, 5, 0);

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