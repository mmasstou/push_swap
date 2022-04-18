# include "DLL.h"

void DLL_PrintFront(t_ps *head)
{
	printf("[ ");
	while (head != NULL)
	{
		printf("(%d, %d) ",head->data, head->key);
		head = head->next;
	}
	printf("]\n");
}

void DLL_PrintBack(t_ps *head)
{
	printf("DLL_PrintBack \n [ ");
	while (head->next != NULL)
		head = head->next;
	while (head != NULL)
	{
		printf("(%d, %d) ",head->data, head->key);
		head = head->prev;
	}
	printf("]\n");
}