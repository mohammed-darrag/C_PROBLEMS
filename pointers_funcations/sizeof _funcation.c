#include <stdio.h>
#include <stdlib.h>


#define   mysize(x)    ((char*)(&x+1)-(char*)(&x))

int main()
{
   int y=5;
   int arr[100];
   printf("%d %d \n",mysize(y),mysize(arr));
   printf("%d %d \n",&arr[0],&arr[100]);
   printf("%d  \n",(char*)&arr[10]-(char*)&arr[0]);

}