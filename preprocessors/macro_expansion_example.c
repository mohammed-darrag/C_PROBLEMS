#include <stdio.h>
#include <stdlib.h>

// Define a macro 'welcome_message' that prints multiple lines
#define welcome_message    printf(" hello \n"); \
                           printf(" hello \n"); \
                           printf(" hello \n"); \
                           printf(" honda \n"); \
                           printf(" welcome \n");

int main(void)
{
    welcome_message;  // Expand and execute the macro 'welcome_message'
    
    return 0;
}
