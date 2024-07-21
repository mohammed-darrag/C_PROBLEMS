
#include <stdio.h>
#include <stdlib.h>

void array_2d_print(int (*arr)[5],int row)
{
    int i;
    for(i=0;i<row;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }


}
int main()
{
    int arr[4][5]={

                  {1,2,3,4,5},
                  {6,7,8,9,10},
                  {11,12,13,14,15},
                  {20,30,40,50,60}

                  };
   array_2d_print(arr,4);


    return 0;
}