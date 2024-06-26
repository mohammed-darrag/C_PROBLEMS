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
void array_sorted(int *arr,int size)
{
    int i,j,temp,c=0,sortedflag;
    for(j=0;j<size;j++)
    {

        sortedflag=1;
        for(i=0;i<size-1;i++)
        {
             c++;
            if(arr[i]>arr[i+1])
            {
                sortedflag==0;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        if(sortedflag==1)
        {
            break;
        }
        printf("number of cycles=%d \n",c);
    }

    return 0;

}

int main()
{
    int arr[] = {-9,-10,-3,4,6,34,5,8,32,823,465,27,94,69,55,67,86,2,4,14,16};
    int size = sizeof(arr) / sizeof(arr[0]);
    array_print(arr,size);
    printf("=========================\n");
    array_sorted(arr,size);
    array_print(arr,size);


    return 0;
}