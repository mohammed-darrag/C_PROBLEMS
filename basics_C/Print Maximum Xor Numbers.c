#include <stdio.h>
#include <stdlib.h>

int maxXor(int n1, int n2)
{
    int i, j, r, max = 0, c = 0; 

    for (i = n1; i <= n2; i++)
    {
        for (j = i; j <= n2; j++)
        {
            printf("%d  %d \n", i, j);
            r = i ^ j;
            if (max < r)   
            {
                max = r;
            }
            c++;
        }
        printf("==================== \n");
    }
    printf("number of cycles %d\n", c);
    return max;
}

int main()
{
    int x = maxXor(1, 10);
    printf("Maximum XOR: %d\n", x);

    return 0;
}