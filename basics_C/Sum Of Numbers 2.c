#include <stdio.h>
#include <stdlib.h>
int sum_numbers (int n)
{
    return ((n+1)*n)/2;
}

int main()
{
   int x;
   x=sum_numbers(50);
   printf("%d",x);

    return 0;
}