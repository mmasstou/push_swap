#include "../include/push_swap.h"

void addfront(t_push_swap **head, int data)
{
    t_push_swap *temp ;

	temp = (t_push_swap *)malloc(sizeof(t_push_swap));
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