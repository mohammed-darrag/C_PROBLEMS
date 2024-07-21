#include <stdio.h>
#include <stdlib.h>

void array_2d_print(int (*arr)[100],int row,int col)
{
    int i;
    for(i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }


}
int main()
{
    int arr[100][100]={

                  {1,2,3,4,5},
                  {6,7,8,9,10},
                  {11,12,13,14,15},
                  {20,30,40,50,60}

                  };
   array_2d_print(arr,6,6);


    return 0;
}