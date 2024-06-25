#include <stdio.h>
#include <stdlib.h>


int* f1(int n)
{
    static int i=5;
    i++;
    printf("f1:i=%d \n",i);
    return &i;
}

int main()
{
  int*p=f1(1);
  printf("main:p=%d \n",*p);
  *p=33;
  f1(1);
    return 0;
}

