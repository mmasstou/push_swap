#include "../include/push_swap.h"

int main()
{
	t_stk *stk;

	stk = (t_stk *)malloc (sizeof(t_stk));
    stk->a = dll_addnew(1337);
    stk->b = dll_addnew(13379);
    // printf("%d\n",head->data);
    dll_addback(stk->a, 42);
    dll_addfront(&stk->a, 1996);
    dll_addfront(&stk->a, 19);
	dll_addback(stk->a, 4242);

	//  dll_addback(stk->b, 429);
    // dll_addfront(&stk->b, 19969);
    // dll_addfront(&stk->b, 199);
	// dll_addback(stk->b, 42429);
	printf("stack a:");
   	DLL_PrintFront(stk->a);
	printf("stack b:");
   	DLL_PrintFront(stk->b);

	// sb(stk);
	pa(stk);
	printf("stack a:");
   	DLL_PrintFront(stk->a);
	printf("stack b:");
   	DLL_PrintFront(stk->b);

}