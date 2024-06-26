#include <stdio.h>
#include <stdlib.h>

void array_print(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("\n");
}

int array_scan(int *arr, int size)
{
    int total;
    scanf("%d", &total);
    for (int i = 0; i < total; i++)
    {
        scanf("%d", &arr[i]);
    }
    return total;
}

int main()
{
    int arr1[100];
    int arr2[100];
    int s1, s2;

    s1 = array_scan(arr1, 100);
    array_print(arr1, s1);
    s2 = array_scan(arr2, 100);
    array_print(arr1, s1);
    array_print(arr2, s2);
    printf("%d  %d",arr1,arr2);


    return 0;
}