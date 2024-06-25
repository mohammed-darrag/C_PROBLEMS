#include <stdio.h>
#include <stdlib.h>

int fun22(int n)
{
    static int max;
    static int flag=0;
    if(flag==0)
    {
        max=n;
        flag=1;
    }
    if(n>max)
    {
        max=n;
    }
    return max;
}

int main()
{
  int x,y;
  while(1)
  {
    scanf("%d",&x);
    y=fun22(x);
    printf("max=%d \n",y);
  }

    return 0;
}