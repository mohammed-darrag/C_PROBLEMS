#include <stdio.h>
#include <stdlib.h>

#define sqr(x) ((x)*(x))  // Define a macro 'sqr(x)' to calculate the square of 'x'

int main(void)
{
    int y = 5;
    printf("%d \n", sqr(y + 2));  // Print the result of 'sqr(y + 2)'

    return 0;
}
