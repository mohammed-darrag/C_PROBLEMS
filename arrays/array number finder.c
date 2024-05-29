#include <stdio.h>
#include <stdlib.h>

int array_findnumber(int* arr, int size, int num, int* pcounter)
{
    int index = -1;
    int c = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            c++;
        }
    }
    *pcounter = c;
    return index;
}

int main()
{
    int arr[] = {
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,
        2, 3, 8, 5, 6, 7, 8, 9, 8, 11, 4, 12, 15, 19, 21, 18,18,18,18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int c;
    int y;
    scanf("%d",&y);
    int x = array_findnumber(arr, size, y, &c);
    if (x != -1)
    {
        printf("Number is: %d, last time found in index: %d, and repeated %d time/s", arr[x], x, c);
    }
    else
    {
        printf("Number not found.");
    }
    return 0;
}