#include "../include/push_swap.h"

void	ps_lstadd_back(t_push_swap *head, int data)
{
	t_push_swap *tmp;
   t_push_swap *newLink;
	
	newLink = (t_push_swap*) malloc(sizeof(t_push_swap));
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

   
   newLink->prev = tmp; 
   tmp->next = newLink; 
}
