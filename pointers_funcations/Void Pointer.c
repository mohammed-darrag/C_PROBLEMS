
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=300;
    void *p;
    p=&x;
    printf("%d  %d",*(char*)p,*(int*)p);


    return 0;
}


//if i write this code will give me error because im not casting the pointer 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=300;
    void *p;
    p=&x;
    printf("%d ",*p);


    return 0;
}