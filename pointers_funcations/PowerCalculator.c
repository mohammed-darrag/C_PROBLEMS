#include <stdio.h>

int power(int n1, int n2)
{
    int r = 1; 
    for (int i = 0; i < n2; i++)
    {
        r =r*n1; 
    }
    return r;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int r = power(x, y);
    printf("%d raised to the power of %d is %d\n", x, y, r);
    return 0;
}