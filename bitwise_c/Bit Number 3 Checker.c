#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int x;
        scanf("%d", &x);
        int y = x & (1 << 3);
        if (y == (1 << 3))
        {
            printf("Bit number 3 equals one.\n");
        }
        else
        {
            printf("Bit number 3 equals zero.\n");
        }

    }
    return 0;

}