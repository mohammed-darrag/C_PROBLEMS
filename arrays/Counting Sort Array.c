
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

void  array_counting_sort(int *arr,int size)
{
    int i,j,k,max,min;
    min=arr[0];
    max=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
             min=arr[i];
        }
    }
     k=max-min+1;
     int *count=calloc(k,sizeof(int));
     for(i=0;i<size;i++)
     {
         count[arr[i]-min]++;
     }
     for(i=0;i<k;i++)
     {
         printf("round=%d  number is=%d  times this number found=%d\n",i,i+min,count[i]);
     }

     j=0;
     for(i=0;i<k;i++)
     {
         while(count[i])
         {
             arr[j]=i+min;
             count[i]--;
             j++;
         }
     }
}

int main()
{
    int arr[] = {-9,-10,-3,-16,13,24,43,15,3,6,5,18,3,1,1,-16,2,2,3,5,5,6,6,8,9,7,6,8,9,2,2,4,14,16};
    int size = sizeof(arr) / sizeof(arr[0]);
    array_print(arr,size);
    printf("=========================\n");
    array_counting_sort(arr,size);
    array_print(arr,size);


    return 0;
}