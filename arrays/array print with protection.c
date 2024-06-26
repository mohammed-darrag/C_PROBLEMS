#include <stdio.h>
#include <stdlib.h>


void array_print(const int*arr,int size)
{
    int i;
    //arr[3]=87;  try to remove this comment 
    for(i=0;i<size;i++)
    {
        printf("%d \n",arr[i]);
    }

    printf("\n");
}

int main()
{
  int arr[5]={10,20,30,40,50};
  array_print(arr,5);



  return 0;

}