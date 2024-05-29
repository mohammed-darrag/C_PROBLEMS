#include <stdio.h>
int add(int n1,int n2)
{
   int x;
   x=n1+n2;
   return x;
}

int main()
{
    int r,r2=1,i,z,r3,y;
    scanf("%d %d",&z,&r);
    r=add(z,5);
    r2=add(r,6);
    printf("%d  %d",r,r2);

    return 0;
}