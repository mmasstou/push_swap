#include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
// a node of the doubly linked list
typedef struct Node {
    struct Node* next;
    int data;
	int	key;
    struct Node* prev;
}	t_node;
 
 
// function to sort a k sorted doubly linked list
t_node *sortAKSortedDLL(t_node* head, int k)
{
	t_node	*i;
	t_node	*j;
	t_node	*temp;
	t_node	*temp2;
	t_node	*temp3;

    if(head == NULL || head->next == NULL)
        return head;
  
    // // perform on all the nodes in list
    // for(t_node *i = head->next; i != NULL; i = i->next) {
    //     t_node *j = i;
	
    //       // There will be atmost k swaps for each element in the list
    //     // since each node is k steps away from its correct position
    //     while(j->prev != NULL && j->data < j->prev->data) {
    //           // swap j and j.prev node
    //         t_node* temp = j->prev->prev;
    //         t_node* temp2 = j->prev;
    //         t_node *temp3 = j->next;
    //         j->prev->next = temp3;
    //         j->prev->prev = j;
    //         j->prev = temp;
    //         j->next = temp2;
    //         if(temp != NULL)
    //             temp->next = j;
    //         if(temp3 != NULL)
    //             temp3->prev = temp2;
    //     }
    //       // if j is now the new head
    //    // then reset head
    //     if(j->prev == NULL)
    //         head = j;
    // }
	i = head->next;
	while (i != NULL)
	{
		j = i;
		while(j->prev != NULL && j->data < j->prev->data) {
              // swap j and j.prev node
            temp = j->prev->prev;
            temp2 = j->prev;
            temp3 = j->next;

            j->prev->next = temp3;
            j->prev->prev = j;
            j->prev = temp;
            j->next = temp2;
            if(temp != NULL)
                temp->next = j;
            if(temp3 != NULL)
                temp3->prev = temp2;
			printf("Swap %d with %d",j->data, );
        }
          // if j is now the new head
       // then reset head
        if(j->prev == NULL)
            head = j;
		i = i->next;
	}
    return head;
}
 
// Function to insert a node at the beginning
// of the Doubly Linked List
void push(t_node** head_ref, int new_data)
{
    t_node* new_node =
        (t_node*)malloc(sizeof(t_node));
 
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}
 
// Function to print nodes in a given doubly linked list
void printList(t_node* head)
{
    if (head == NULL)
       printf("Doubly Linked list empty\n");
    while (head != NULL) {
		printf(" %d ",head->data);
        head = head->next;
    }
}
 
// Driver program to test above
int main()
{
    t_node* head = NULL;
	int i;
	int a[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 444};
	int length = 13;
    // Create the doubly linked list:
    // 3<->6<->2<->12<->56<->8
	i = length - 1;
	while (i >= 0)
    	push(&head, a[i--]);

    int k = 2;
 
    printf("Original Doubly linked list:\n");
    printList(head);
 
    // sort the biotonic DLL
    head = sortAKSortedDLL(head, k);
 
    printf("\nDoubly linked list after sorting:\n");
    printList(head);
 
    return 0;
}
 