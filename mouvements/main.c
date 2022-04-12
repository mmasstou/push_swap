// C++ program for Quick Sort on Singly Linked List
#include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

/* a node of the singly linked list */
typedef struct  Node {
    int data;
    struct Node* next;
}	t_node;
 
/* A utility function to insert a node at the beginning of
 * linked list */
void push(t_node** head_ref, int new_data)
{
    /* allocate node */
	t_node *new_node;
   
   new_node = (t_node *)malloc(sizeof(t_node));
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
/* A utility function to print linked list */
void printList(t_node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
 
// Returns the last node of the list
t_node* getTail(t_node* cur)
{
    while (cur != NULL && cur->next != NULL)
        cur = cur->next;
    return cur;
}
 
// Partitions the list taking the last element as the pivot
t_node* partition(t_node* head, t_node* end,
                       t_node** newHead,
                       t_node** newEnd)
{
    t_node* pivot = end;
    t_node *prev = NULL, *cur = head, *tail = pivot;
 
    // During partition, both the head and end of the list
    // might change which is updated in the newHead and
    // newEnd variables
    while (cur != pivot) {
        if (cur->data < pivot->data) {
            // First node that has a value less than the
            // pivot - becomes the new head
            if ((*newHead) == NULL)
                (*newHead) = cur;
 
            prev = cur;
            cur = cur->next;
        }
        else // If cur node is greater than pivot
        {
            // Move cur node to next of tail, and change
            // tail
            if (prev)
                prev->next = cur->next;
            t_node* tmp = cur->next;
            cur->next = NULL;
            tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }
 
    // If the pivot data is the smallest element in the
    // current list, pivot becomes the head
    if ((*newHead) == NULL)
        (*newHead) = pivot;
 
    // Update newEnd to the current last node
    (*newEnd) = tail;
 
    // Return the pivot node
    return pivot;
}
 
// here the sorting happens exclusive of the end node
t_node* quickSortRecur(t_node* head,
                            t_node* end)
{
    // base condition
    if (!head || head == end)
        return head;
 
    t_node *newHead = NULL, *newEnd = NULL;
 
    // Partition the list, newHead and newEnd will be
    // updated by the partition function
    t_node* pivot
        = partition(head, end, &newHead, &newEnd);
 
    // If pivot is the smallest element - no need to recur
    // for the left part.
    if (newHead != pivot) {
        // Set the node before the pivot node as NULL
        t_node* tmp = newHead;
        while (tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = NULL;
 
        // Recur for the list before pivot
        newHead = quickSortRecur(newHead, tmp);
 
        // Change next of last node of the left half to
        // pivot
        tmp = getTail(newHead);
        tmp->next = pivot;
    }
 
    // Recur for the list after the pivot element
    pivot->next = quickSortRecur(pivot->next, newEnd);
 
    return newHead;
}
 
// The main function for quick sort. This is a wrapper over
// recursive function quickSortRecur()
void quickSort(t_node** headRef)
{
    (*headRef)
        = quickSortRecur(*headRef, getTail(*headRef));
    return;
}
 
// Driver code
int main()
{
    t_node* a = NULL;
	int i;
	int m[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 444};

	i = 0;
	while (i < 13)
    	push(&a, m[i++]);
    // push(&a, 4);
    // push(&a, 8);
    // push(&a, 7);
    // push(&a, 9);
 
    printf("Linked List before sorting \n");
    printList(a);
 
    quickSort(&a);
 
    printf("Linked List after sorting \n");
    printList(a);
 
    return 0;
}