#include <stdio.h>
#include <stdlib.h>

void array_print(int *arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}
void array_selection_sort(int *arr,int size)
{
    int i,j,temp,last,max;
    last=size-1;
    for(j=0;j<size;j++)
    {
        max=0;
        for(i=0;i<=last;i++)
        {
            if(arr[i]>arr[max])
            {
                max=i;
            }

        }
        temp=arr[max];
        arr[max]=arr[last];
        arr[last]=temp;
        last--;

    }


}

int main()
{
    int arr[] = {-9,-10,-3,4,6,34,5,8,32,823,465,27,94,69,55,67,86,2,4,14,16};
    int size = sizeof(arr) / sizeof(arr[0]);
    array_print(arr,size);
    printf("=========================\n");
    array_selection_sort(arr,size);
    array_print(arr,size);


    return 0;
}