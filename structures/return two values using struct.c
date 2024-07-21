
#include <stdio.h>
#include <stdlib.h>


typedef struct
{
   int sum;
   int mul;

}result_t;

result_t add_mul(int x,int y)
{
    result_t r;
    r.mul=x*y;
    r.sum=x+y;

    return r;
}

int main()
{
     result_t r;
     r=add_mul(10,20);
     printf("%d %d",r.sum,r.mul);


    return 0;
}