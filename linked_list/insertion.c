#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * 1. START
 * 2. Create a node to store the data
 * 3. Check if the list is empty
 * 4. If the list is empty, add the data to the node and assign the head pointer to it.
 * 5. If the list is not empty, add the data to a node and link to the current head. Assign the head to the newly added node.
 * 6. END
*/

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

// Print List
void printList(){
    struct node *p = head;
    printf("\n[");

    while (p)
    {
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("]");
}

// Insertion at the beginning
void insert_at_begin(int data)
{
    struct node *lk = (struct node*) malloc(sizeof(struct node));
}
int main()
{

    return(0);
}