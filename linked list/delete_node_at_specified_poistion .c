#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void del_pos(struct node**head,int position)
{
    struct node*current=*head;
    struct node*previous=*head;
    if(*head==NULL)
    printf("list is already empty\n");
    else if(position==1)
    {
      *head=current->link;
      free(current);
      current=NULL;
    }
    else
    {
        while(position != 1)
        {
            previous=current;
            current=current->link;
            position--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }

}


int main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;
    struct node *current = head;
    for (int i = 2; i <= 5; i++)
    {
        current->link = malloc(sizeof(struct node));
        current = current->link;
        current->data = i;
        current->link = NULL;
    }
    int position = 2;
    del_pos(&head, position);
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    return 0;
}