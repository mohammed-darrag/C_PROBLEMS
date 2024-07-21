
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node* add_to_end(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return ptr; // Return original pointer if memory allocation fails
    }
    temp->data = data;
    temp->link = NULL;

    if (ptr == NULL) {
        return temp; // If the list is empty, return the newly created node
    }

    struct node *current = ptr;
    while (current->link != NULL)
    {
        current = current->link;
    }

    current->link = temp;
    return ptr;
}


void add_at_pos(struct node *head, int data, int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;
    while (pos != 2)
    {
        ptr = ptr->link;
        pos--;
    }

    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 97;
    head->link = NULL;

    head = add_to_end(head, 98);
    head = add_to_end(head, 100);
    int data = 99, position = 3;
    add_at_pos(head, data, position);

    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->link;
    }


    ptr = head;
    while (ptr != NULL)
    {
        struct node *temp = ptr;
        ptr = ptr->link;

    }

    return 0;
}