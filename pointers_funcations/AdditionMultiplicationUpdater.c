#include <stdio.h>
#include <stdlib.h>

int add_mul(int x,int y,int *pmul)
{
    int r1,r2;
    r1=x*y;
    r2=x+y;
    *pmul=r2;
    return r1;
}

int main()
{
    int x=300,y=700,mul=10,sum=20;
    sum=add_mul(x,y,&mul);
    printf("sum=%d  mul=%d \n",sum,mul);
    return 0;

}