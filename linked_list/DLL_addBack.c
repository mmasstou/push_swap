# include "DLL.h"

void	dll_addback(t_ps *head, int data)
{
	t_ps *tmp;
   t_ps *newLink;
	
	newLink = (t_ps*) malloc(sizeof(t_ps));
	if (!newLink)
	{
		printf("malloc Error !\n");
		exit(1);
	}
	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
   
   //create a link
  
   newLink->data = data;
   newLink->next = NULL;

   
   newLink->prev = tmp; 
   tmp->next = newLink; 
}
