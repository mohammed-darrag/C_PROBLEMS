#include <stdio.h>
#include <stdlib.h>

int main()
{
         int x;
         scanf("%d",&x);
         int y=(x<<3)-x;  // (<<3)==(2^3)=8
         printf("%d",y);

     return 0;
}