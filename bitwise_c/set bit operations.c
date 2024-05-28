
1: if i want to turn on light on specified bit "set_bit"

#include <stdio.h>
#include <stdlib.h>

int main()
{

    while (1)
    {
       int x;
       scanf("%d",&x);
       x=x|(1<<4); //bit which i want to work on it 
       printf("%d \n",x);

    }
    return 0;
}


2:if i want to turn on light on specified bit "get_bit"
#include <stdio.h>
#include <stdlib.h>

int main()
{

    while (1)
    {
       int x;
       scanf("%d",&x);
       x=x&(~(1<<4));  // 4 bit which i want to work on it 
       printf("%d \n",x);
    }
    return 0;
}

3:if i want to turn on bit which it off and turn off bit which it lighted "toggel"
#include <stdio.h>
#include <stdlib.h>

int main()
{

    while (1)
    {
       int x;
       scanf("%d",&x);
       x=x^((1<<4));  // 4 bit which i want to work on it 
       printf("%d \n",x);
    }
    return 0;
}