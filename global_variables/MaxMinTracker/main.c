#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;
  while (1)
  {
      scanf("%d",&x);

      if(x==1)
      {
          printf("max=%d \n",get_max());
      }
      else if(x==0)
      {
          printf("min=%d \n",get_min());
      }
      else
      {
          take_num(x);

      }

  }
  return 0;


}