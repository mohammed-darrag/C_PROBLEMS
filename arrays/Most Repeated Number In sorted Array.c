
#include <stdio.h>
#include <stdlib.h>

int max_repeated_number_sorted(int *arr, int size,int *pnum)
{
    int i, j, max = 0, c=0 ;
    for(i=0; i<size-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            c++;
            if(c>=max)
            {
                max=c;
                *pnum=arr[i];
            }
        }

        else
        {
            c=0;
        }

    }

    return max+1;

}

int main()
{
    int num;
    int arr[]= {1,1,1,1,2,2,2,3,3,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=max_repeated_number_sorted(arr,size,&num);
    printf("%d is repeated %d times\n",num,max);

    return 0;
}