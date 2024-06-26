#include <stdio.h>
#include <stdlib.h>

int max_repeated_number(int *arr, int size,int *pnum)
{
    int i, j, max = 0, c ;
    for(i=0;i<size;i++)
    {
        c=0;
        for(j=0;j<size;j++)
        {
            if(arr[i]== arr[j])
            {
              c++;
            }
        }
        if(c>max)
        {
            max=c;
            *pnum=arr[i];
        }
    }
    return max;

}

int main()
{
    int num;
    int arr[]={1,2,3,5,4,6,7,8,3,44,53,56,89,2,1,2,3,45,6,4,4,4,3,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=max_repeated_number(arr,size,&num);
    printf("%d is repeated %d times\n",num,max);

    return 0;
}