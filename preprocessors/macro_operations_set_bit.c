#include <stdio.h>
#include <stdlib.h>

#define sqr(x) ( (x) * (x) )  // Define a macro to calculate the square of 'x'
#define set_bit(value, bit) ( (value) | (1 << (bit)) )  // Define a macro to set a specific bit in 'value'

int main(void)
{
    int y = 5;
    y = set_bit(y, 3);  // Set the 3rd bit of 'y'
    printf("%d \n", sqr(y));  // Print the square of the updated 'y'
    
    return 0;
}
