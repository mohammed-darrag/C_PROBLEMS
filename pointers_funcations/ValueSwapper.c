#include <stdio.h>
#include <stdlib.h>

void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d  y=%d  %d  %d \n",x,y,&x,&y);

}
int main()
{
  int x,y;
  x=5;
  y=6;
  swap(x,y);
  printf("%d %d \n",x,y);
  return 0;

}