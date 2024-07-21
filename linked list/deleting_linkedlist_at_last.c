#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head)
{
    int counter = 0;
    if (head == NULL)
    {
        printf("linked list is empty\n");
        return;
    }

    struct node *ptr = head;
    while (ptr != NULL)
    {
        counter++;
        printf("%d \n", ptr->data);
        ptr = ptr->link;
    }
    printf("number of nodes in the linked list = %d\n", counter);
}

struct node* del_last(struct node *head)
{
    if (head == NULL)
    {
        printf("list is already empty\n");
        return NULL;
    }
    else if (head->link == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        struct node *temp = head;
        struct node *temp2 = head;
        while (temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        return head;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    if (current == NULL)
    {
        printf("Memory allocation failed\n");
        free(head);
        return 1;
    }
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    if (current == NULL)
    {
        printf("Memory allocation failed\n");
        free(head->link);
        free(head);
        return 1;
    }
    current->data = 100;
    current->link = NULL;
    head->link->link = current;

    print_data(head);
    head = del_last(head);
    printf("after deleting\n");
    print_data(head);

    // Free allocated memory
    struct node *ptr = head;
    while (ptr != NULL)
    {
        struct node *temp = ptr;
        ptr = ptr->link;
        free(temp);
    }

    return 0;
}