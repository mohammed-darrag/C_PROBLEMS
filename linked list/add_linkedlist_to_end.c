
#include <stdio.h>
#include <stdlib.h>

struct node* add_to_end(struct node*ptr,int data)
{
 struct node*temp=malloc(sizeof(struct node));
 temp->data=data;
 temp->link=NULL;
 ptr->link=temp;
 return temp;

}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

   struct node*ptr=head;
   ptr=add_to_end(ptr,97);
   ptr=add_to_end(ptr,98);
   ptr=add_to_end(ptr,99);
   ptr=add_to_end(ptr,100);
   ptr=head;

   while(ptr!=NULL)
   {
       printf("%d  ",ptr->data);
       ptr=ptr->link;
   }


    return 0;
}s