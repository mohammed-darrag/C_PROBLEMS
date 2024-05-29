#include <stdio.h>
#include <stdlib.h>

void array_print(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d \n",arr[i]);
    }
}

int main()
{

    int i,arr[10]={300,2,3,4,5,20};
    array_print(arr,10);
    return 0;
}