#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        signed int x;
        scanf("%d", &x);
        if ((x & (1 << 31))==0)
        {
            printf("This number is positive.\n");
        }
        else
        {
            printf("This number is negative.\n");
        }

    }
    return 0;

}