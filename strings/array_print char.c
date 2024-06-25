#include <stdio.h>
#include <stdlib.h>

void array_print(char*arr,char size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d \n",arr[i]);
    }
    printf("\n");
}


int main()
{
    char arr[]={1,2,3,4,5,6,7,8,9};
    array_print(arr,8);




    return 0;
}