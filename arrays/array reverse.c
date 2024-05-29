#include <stdio.h>
#include <stdlib.h>

void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}

void array_reverse(int*arr,int size)
{
    int i,temp,j=size-1;
    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d \n",size);
    array_print(arr, size);
    printf("====================================\n");
    array_reverse(arr,size);
    printf("After swapping:\n");
    array_print(arr, size);


    return 0;
}