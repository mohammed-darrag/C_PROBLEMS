#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numbers;
  printf("enter the numbers of groub:");
  scanf("%d",&numbers);

  int max;
  scanf("%d", &max);
  for(int i=1;i<numbers;i++)
  {
      int num;
      scanf("%d",&num);
      if(num>max);
      max=num;
  }
  printf("the biggest number is %d",max);



    return 0;
}