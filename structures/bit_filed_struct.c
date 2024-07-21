#include <stdio.h>
#include <stdlib.h>

// Define a structure with bit fields
typedef struct {
    unsigned int b:2;    // 2 bits for b
    unsigned int b2:5;   // 5 bits for b2
    unsigned int b3:10;  // 10 bits for b3
    int x;               // Regular integer
} s_t;

int main() {
    s_t s1;
    
    // Print the size of the structure
    printf("Size of structure: %d bytes\n", (int)sizeof(s1));
    
    // Assign a binary value to the integer field
    s1.x = 0b1010100101;
    
    // Print the values of the bit fields
    printf("b: %d\n", s1.b);
    printf("b2: %d\n", s1.b2);
    printf("b3: %d\n", s1.b3);

    return 0;
}
