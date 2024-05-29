#include <stdio.h>
#include <stdlib.h>


void array_print(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int array_scan(int *arr)
{
    int total;
    printf("Enter the number of elements (not more than 100):\n");
    scanf("%d", &total);
    printf("Enter the numbers:\n");
    for (int i = 0; i < total; i++)
    {
        scanf("%d", &arr[i]);
    }

    return total;
}

int main()
{

    int arr[100] = {0};
    int x = 0;
    printf("Array before scanning:\n");
    array_print(arr,5);
    x = array_scan(arr);
    printf("Total number of elements scanned: %d\n", x);
    printf("Array after scanning:\n");
    array_print(arr, x);



    return 0;
}