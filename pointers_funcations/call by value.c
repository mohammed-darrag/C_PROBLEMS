#include <stdio.h>
#include <stdlib.h>

void fun(int x,int y)
{
     x=10000;
     y=10;
    printf("x=%d  y=%d \n",x,y);

}
int main()
{
  int x,y;
  x=10;
  y=10000;
  fun(x,y);
  printf("x=%d  y=%d \n",x,y);
  return 0;

}