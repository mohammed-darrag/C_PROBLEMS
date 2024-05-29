
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
int array_swap(int* arr1, int size1, int* arr2, int size2)
{
    int size;
    if (size1 < size2)
    {
        size = size1;
    }
    else
    {
        size = size2;
    }

    for (int i = 0; i < size; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}



int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};
    int arr2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Before swapping:\n");
    array_print(arr1, size1);
    array_print(arr2, size2);

    printf("====================================\n");

    array_swap(arr1, size1, arr2, size2);

    printf("After swapping:\n");
    array_print(arr1, size1);
    array_print(arr2, size2);

    return 0;
}