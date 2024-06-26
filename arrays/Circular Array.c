
#include <stdio.h>
#include <stdlib.h>

void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }

    printf("\n");
}

void array_circular_rotation(int *arr, int size, int rotations)
{
    int i, j, temp;
    for (j = 0; j < rotations; j++)    // Fixing the loop condition
    {
        temp = arr[size - 1];
        for (i = size - 1; i > 0; i--)    // Start from size-2
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
}


int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    array_print(arr,size);
    array_circular_rotation(arr,9,1);
    array_print(arr,size);

}