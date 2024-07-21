#include <stdio.h>
#include <stdlib.h>

// Define 'pu8' as a typedef for 'unsigned char*'
typedef unsigned char* pu8;

int main(void)
{
    pu8 p1, p2, p3;  // Define three pointers of type 'unsigned char*'
    printf("%zu  %zu  %zu\n", sizeof(p1), sizeof(p2), sizeof(p3));  // Print sizes of pointers

    return 0;
}
