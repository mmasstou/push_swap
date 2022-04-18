#include "../include/push_swap.h"

int main()
{
	t_stk *stk;

	stk = (t_stk *)malloc (sizeof(t_stk));
    stk->a = dll_addnew(1337, 0);
    stk->b = dll_addnew(13379, 0);
    // printf("%d\n",head->data);
    dll_addback(stk->a, 42, 0);
    dll_addback(stk->a, 1996, 0);
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
	// printf("stack a:");
   	// DLL_PrintFront(stk->a);
	// printf("stack b:");
   	// DLL_PrintFront(stk->b);

}