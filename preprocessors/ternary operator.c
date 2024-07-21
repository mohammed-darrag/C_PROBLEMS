#include <stdio.h>
#include <stdlib.h>

#define limit(x, low, high)  ((x) > (high) ? (high) : ((x) < (low) ? (low) : (x)))
#define max(x, y)  ((x) > (y) ? (x) : (y))

int main(void)
{
    int y = 45, x = 12;
    x = limit(x, 10, 20);
    printf("%d  %d\n", max(x, y), x);
    
    return 0;
}
