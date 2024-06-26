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

int* array_scan2(int *psize)
{
    static int arr[100];
    int i,total=0;
    scanf("%d",&total);
    for(i=0;i<total;i++)
    {
        scanf("%d",&arr[i]);

    }
    *psize=i;
    return arr;

}

int main()
{
    int s1,s2,s3;
    int *p1,*p2;
    p1=array_scan2(&s1);
    array_print(p1,s1);
    p2=array_scan2(&s2);
    array_print(p1,s1);
    array_print(p1,s2);
    printf("%d  %d",p1,p2);


    return 0;
}