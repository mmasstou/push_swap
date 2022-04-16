# include "DLL.h"

void	dll_delone(t_ps** head, char pos)
{
	t_ps *temp;
	int		size;

	size = dll_size(*head);
	if (size == 0)
		return ;
	if (pos == DLL_FIRST)
	{
		temp = (*head)->next->prev;
		(*head)->next->prev = NULL;
		free(temp);
		(*head) = (*head)->next;
	}
	if (pos == DLL_LAST)
	{
		temp = (*head);
		while ((*head)->next != NULL)
			(*head) = (*head)->next;
		(*head)->prev->next = NULL;
		(*head) = temp;
	}
}

// struct node* deleteFirst() {

//    //save reference to first link
//    struct node *tempLink = head;
	
//    //if only one link
//    if(head->next == NULL){
//       last = NULL;
//    } else {
//       head->next->prev = NULL;
//    }
	
//    head = head->next;
//    //return the deleted link
//    return tempLink;
// }

// //delete link at the last location

// struct node* deleteLast() {
//    //save reference to last link
//    struct node *tempLink = last;
	
//    //if only one link
//    if(head->next == NULL) {
//       head = NULL;
//    } else {
//       last->prev->next = NULL;
//    }
	
//    last = last->prev;
	
//    //return the deleted link
//    return tempLink;
// }