# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct push_swap
{
	int					data;
	int					key;
	struct push_swap	*next;
	struct push_swap	*prev;

}	t_push_swap;

t_push_swap *ps_lstnew(int content);
void        ps_lstadd_back(t_push_swap *head, int data);
void        addfront(t_push_swap **head, int data);
void        deleteNode(t_push_swap** head_ref, t_push_swap* del);


int main()
{
    t_push_swap *head;
    t_push_swap *temp;
    head = ps_lstnew(1337);
    printf("%d\n",head->data);
    ps_lstadd_back(head, 42);
    // temp = head;
    // while (head)
    // {
    //     printf("DLL_addback %d\n",head->data);
    //     head = head->next;
    // }  
    addfront(&head, 1996);
    addfront(&head, 19);
    deleteNode(&head, head->next);
    deleteNode(&head, head->prev);
    temp = head;
    while (temp)
    {
        printf("DLL_addfront %d\n",temp->data);
        temp = temp->next;
    } 
}

t_push_swap	*ps_lstnew(int content)
{
	t_push_swap	*newelement;

	newelement = (t_push_swap *)malloc(sizeof(t_push_swap));
	if (!newelement)
		return (NULL);
	newelement->data = content;
	newelement->next = NULL;
	newelement->prev = NULL;
	return (newelement);
}

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

void addfront(t_push_swap **head, int data)
{
    t_push_swap *temp ;

	temp = (t_push_swap *)malloc(sizeof(t_push_swap));
    if (!temp)
        exit(1);
    temp->data = data;
    temp->next = temp->prev = NULL;
    if (!(*head))
        (*head) = temp;
    else
    {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}

void deleteNode(t_push_swap** head_ref, t_push_swap* del)
{
    /* base case */
    if (*head_ref == NULL || del == NULL)
        return;
 
    /* If node to be deleted is head node */
    if (*head_ref == del)
        *head_ref = del->next;
 
    /* Change next only if node to be
    deleted is NOT the last node */
    if (del->next != NULL)
        del->next->prev = del->prev;
 
    /* Change prev only if node to be
    deleted is NOT the first node */
    if (del->prev != NULL)
        del->prev->next = del->next;
 
    /* Finally, free the memory occupied by del*/
    free(del);
    return;
}