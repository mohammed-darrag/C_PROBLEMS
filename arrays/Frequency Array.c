
#include <stdio.h>
#include <stdlib.h>

int max_repeated_number_mono(int *arr, int size,int *pnum)
{
    int i,max=0;
    int count[10]={0};
    for(i=0;i<size;i++)
    {
        count[arr[i]]++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d %d \n",i,count[i]);
    }
    for(i=0;i<10;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            *pnum=i;
        }
    }
    return max;


}

int main()
{
    int num;
    int arr[]= {1,2,3,4,5,6,4,5,3,4,5,3,7,5,3,8,3,4,5,6,8,1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=max_repeated_number_mono(arr,size,&num);
    printf("%d is repeated %d times\n",num,max);

    return 0;
}