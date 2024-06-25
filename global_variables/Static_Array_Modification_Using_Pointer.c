#include <stdio.h>
#include <stdlib.h>

void array_print(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int *f2(void)
{
    static int arr[]={1,2,3,4,5};
    int*p=arr;
    return p;
}

int main()
{
  int*pointer=f2();;
  array_print(pointer,5);
  pointer[3]=20;
  array_print(pointer,5);

    return 0;
}