#include <stdio.h>
#include <stdlib.h>

int array_findnumber(int*arr,int size,int num)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
             return i;
        }
    }
}

int main()
{
    int arr[10]={2,3,4,5,6,7,8,9,10,11};
    int x;
    x=array_findnumber(arr,10,6);
    printf("%d  %d",x,arr[x]);
    return 0;
}