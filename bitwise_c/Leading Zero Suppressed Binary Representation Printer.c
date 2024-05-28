#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int foundNonZero = false;
    while (1)
    {
        scanf("%d", &x);
        for (int i = 31; i >= 0; i--)
        {
            if ((x >> i) & 1)
            {
                foundNonZero = true;
                printf("1");
            }
            else if (foundNonZero)
            {
                printf("0");
            }
        }
        if (!foundNonZero)
        {
            printf("0");
        }
        printf("\n");
        foundNonZero = false;
    }
    return 0;
}
