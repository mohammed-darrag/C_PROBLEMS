#include <stdio.h>
#include <stdlib.h>

int sum_numbers (int n)
{
    int sum=0;

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    return sum;
}

int main()
{
   int x;
   x=sum_numbers(50);
   printf("%d",x);

    return 0;
}