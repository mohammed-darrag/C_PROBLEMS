#include <stdio.h>
#include <stdlib.h>

void array_print(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf ("\n");
}

int isprime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void array_remove(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (isprime(arr[i]))
        {
            arr[i] = 0;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 7, 0, 2, 5, 4, 2, 8, 2, 78, 3, 7, 3, 78, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    array_remove(arr, size);
    array_print(arr, size);
    return 0;
}