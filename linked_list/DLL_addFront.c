# include "DLL.h"

void dll_addfront(t_ps **head, int data, int key)
{
    t_ps *temp ;

	temp = (t_ps *)malloc(sizeof(t_ps));
    if (!temp)
        exit(1);
    temp->data = data;
	temp->key = key;
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