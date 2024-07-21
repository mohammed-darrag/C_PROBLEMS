#include "list.h"

node_t* create_node(int data)
{
    node_t* newnode = malloc(sizeof(node_t));
        newnode->data = data;
        newnode->next = NULL;
    return newnode;
}

void list_print(node_t *head)
{
    node_t *current = head;
    while (current != NULL)
    {
        printf("%d \n", current->data);
        current = current->next;
    }
}