
#include <stdio.h>
#include <stdlib.h>

int max_zeros(unsigned int n)
{
    int i, c = 0, max = 0;
    for (i = 0; i <= 32; i++)
    {
        if ((n >> i) & 1)
        {
            if (c > max)
            {
                max = c;
            }
            c = 0;
        }
        else
        {
            c++;
        }
    }
    return max;
}

int main()
{
    unsigned int x = 0b0000000010001000000000100;
    printf("number of zeros = %d \n", max_zeros(x));

    return 0;
}