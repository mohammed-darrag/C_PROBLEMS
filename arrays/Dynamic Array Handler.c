
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

int* array_scan_dynm(int *psize)
{
    int i,total=0;
    scanf("%d",&total);
    int *arr=(int *)malloc(total*sizeof(int));
    for(i=0;i<total;i++)
    {
        scanf("%d",&arr[i]);

    }
    *psize=total;
    return arr;

}

int main()
{
    int *arr;
    int *arr2;
    int s1,s2;

    arr=array_scan_dynm(&s1);
    free(arr);
    arr2=array_scan_dynm(&s2);
    array_print(arr,s1);
    array_print(arr2,s2);
    printf("%d %d",&arr,&arr2);

    return 0;
}