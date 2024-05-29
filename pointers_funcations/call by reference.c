#include <stdio.h>
#include <stdlib.h>

void fun(int *ptr1,int *ptr2)
{

    *ptr1=10;
    *ptr2=10000;

    printf("x=%d  y=%d \n",*ptr1,*ptr2);

}

int main()
{
    int x,y;
    x=10;
    y=10000;
    fun(&x,&y);
    printf("x=%d  y=%d \n",x,y);
    return 0;

}