#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,i=0,sum=0;
   scanf("%d",&x);
   while(x>0)
   {
       int rem=x%10;
       sum=sum+rem;
       x=x/10;
   }
   printf("%d",sum);

    return 0;
}