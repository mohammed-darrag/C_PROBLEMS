
#include <stdio.h>
#include <stdlib.h>
#include  "list.h"

int main()
{
    node_t *l=NULL;
    l=malloc(sizeof(node_t));
    l->data=5;
    l->next=NULLPTR;
    l->next=malloc(sizeof(node_t));
    l->next->next=NULLPTR;
    l->next->data=7;
    l->next->next=malloc(sizeof(node_t));
    l->next->next->data=10;
    l->next->next->next=NULLPTR;
    printf("%d %d %d \n",l->data,l->next->data,l->next->next->data);

    return 0;
}