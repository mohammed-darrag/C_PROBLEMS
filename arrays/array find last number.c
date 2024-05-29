#include <stdio.h>
#include <stdlib.h>

int array_findlastnumber(int*arr,int size,int num)
{
    int index;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
             index=i;
        }
    }
    return index;
}

int main()
{
    int arr[10]={2,3,6,5,6,7,8,9,6,11};
    int x;
    x=array_findnumber(arr,10,6);
    printf("%d ",x);
    return 0;
}