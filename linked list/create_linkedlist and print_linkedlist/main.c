#include <stdio.h>
#include <stdlib.h>
#include  "list.h"

int main()
{
    node_t *l=NULL;
    l=create_node(5);
    l->next=create_node(7);
    l->next->next=create_node(9);
    l->next->next->next=create_node(11);
    list_print(l);


    return 0;
}
