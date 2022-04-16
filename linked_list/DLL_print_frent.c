# include "DLL.h"

void DLL_PrintFront(t_ps *head)
{
	printf("DLL_PrintFront \n [ ");
	while (head != NULL)
	{
		printf("%d ",head->data);
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
		printf("%d ",head->data);
		head = head->prev;
	}
	printf("]\n");
}