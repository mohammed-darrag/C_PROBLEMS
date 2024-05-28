#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    int x;
    int i;
    while (1)
    {
        counter = 0;
        scanf("%d", &x);
        for (i = 0; i < 32; i++)
        {
            if ((x >> i) & 1)
            {
                counter++;
            }
        }
        printf("Number of ones: %d\n", counter);
    }
    return 0;
}