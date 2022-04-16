# include "DLL.h"

int main()
{
    t_ps *head;
    t_ps *temp;
    t_ps *temp1;
	
    head = dll_addnew(1337);
    printf("%d\n",head->data);
    dll_addback(head, 42);
    dll_addfront(&head, 1996);
    dll_addfront(&head, 19);
    // temp = head;
    // while (head)
    // {
    //     printf("DLL_addback %d\n",head->data);
    //     head = head->next;
    // }  
   	DLL_PrintFront(head);
	// printf (" DLL_FIRST \n");
    // dll_delone(&head, DLL_FIRST);
   	// DLL_PrintFront(head);
	// printf (" dll_addback(head, 4242) \n");
	// dll_addback(head, 4242);
	// DLL_PrintFront(head);
	// printf (" DLL_LAST \n");
	// dll_delone(&head, DLL_LAST);
	// DLL_PrintFront(head);
	// printf (" dll_swap \n");
	// dll_swap(&head);
   	// DLL_PrintFront(head);
	// dll_retate(&head);
	// DLL_PrintFront(head);
	temp = head;
	temp1 = head;
	dll_retate_reverse(&temp1);
	DLL_PrintFront(temp1);
	dll_retate(&temp);
	DLL_PrintFront(temp);
	// DLL_PrintBack(head);

}
