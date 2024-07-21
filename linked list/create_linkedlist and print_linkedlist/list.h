
#ifndef LIST_H
#define LIST_H

typedef struct node
{
    int data;
    struct node *next;
} node_t;

node_t* create_node(int data);
void list_print(node_t *head);

#endif
