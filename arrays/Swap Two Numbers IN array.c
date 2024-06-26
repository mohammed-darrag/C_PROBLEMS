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

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before swapping: %d %d\n", arr[1], arr[3]);
    array_print(arr,size);
    swap(&arr[1], &arr[3]);
    printf("After swapping: %d %d\n", arr[1], arr[3]);
    array_print(arr,size);

    return 0;
}