#include <stdio.h>
#include <stdlib.h>

int main()
{
  const int g=10; //stack	
  int f=g*4;
  int x=g+1;

  printf("%d \n",g);
  int *p=&g;
  *p=150;
  printf("%d \n",g);


    return 0;
}