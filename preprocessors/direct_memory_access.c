#include <stdio.h>
#include <stdlib.h>

#define timer   *(*(char *)0x50)  // Define a macro 'timer' pointing to memory address 0x50

int main(void)
{
    timer = 5;  // Set the value at memory address 0x50 to 5

    if (timer == 5)  // Check if the value at memory address 0x50 is 5
    {
        printf("hello\n");  // Print "hello" if the condition is true
    }

    return 0;
}
