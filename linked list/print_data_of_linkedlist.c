
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;

};

void print_data(struct node*head)
{
    int counter=0;
    if(head==NULL)
    {
        printf("linked is empty");
    }
  struct node *ptr=NULL;
  ptr=head;
  while(ptr!=NULL)
  {
      counter++;
      printf("%d\n",ptr->data);
      ptr=ptr->link;
  }
  printf("numbder of nodes at linkedlist=%d\n",counter);


}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=100;
    current->link=NULL;

    head->link->link=current;

    printf("%d %d %d\n",head->data,head->link->data,head->link->link->data);
    print_data(head);


    return 0;
}