#include <stdio.h>
#include <stdlib.h>

static int y=50;

int main()
{
   printf("main:y=%d \n",y);
   int y=20;
   printf("main:y=%d \n",y);
   for(y=5;y<10;y++)
   {
       printf("%d \n",y);
   }
   printf("after loop %d",y);


    return 0;
}