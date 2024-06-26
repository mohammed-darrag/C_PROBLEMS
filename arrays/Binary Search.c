
#include <stdio.h>
#include <stdlib.h>

int array_binary_search(int* arr, int size, int num)
{
    int first, last, middle, c = 0;
    first = 0;
    last = size - 1;
    while (last >= first)
    {
        middle = (first + last) / 2;
        c++;
        if (arr[middle] == num)
        {
            printf("Number of cycles = %d\n", c);
            return middle;
        }
        else if (arr[middle] > num)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
      
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    int index = array_binary_search(arr, size, 14);
    printf("Size: %d, Index: %d\n", size, index);

    return 0;
}