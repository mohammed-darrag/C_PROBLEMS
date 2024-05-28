#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        signed int x;
        scanf("%d", &x);
        if (((x>>6)&(1))==1) //6=bit which i need to check it's one or zero 
        {
            printf("This bit is one.\n");
        }
        else
        {
            printf("This bit is zero.\n");
        }

    }
    return 0;

}