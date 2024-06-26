
#include <stdio.h>
#include <stdlib.h>

int max_repeated_number_jungle(int *arr, int size, int *pnum)
{
    int i, max = 0, count_size, max_num = 0, min_num = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }

    count_size = max_num - min_num + 1;
    int *count = (int*)calloc(count_size, sizeof(int));

    for (i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    for (i = 0; i < count_size; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            *pnum = i ;
        }
    }

    free(count); // Free dynamically allocated memory
    return max;
}

int main()
{
    int num;
    int arr[] = {1, 2, 3, 5, 4, 6, 7, 8,3, 5, 5, 3, 44, 53, 56, 89, 2, 1, 2, 3, 45, 6, 4, 4, 4, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = max_repeated_number_jungle(arr, size, &num);
    printf("%d is repeated %d times\n", num, max);

    return 0;
}