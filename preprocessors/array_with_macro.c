#include <stdio.h>
#include <stdlib.h>

#define nofleds    9  // Define a macro 'nofleds' with value 9

int main(void)
{
    int arr[nofleds] = {1, 2, 3, 4, 5, 6, 7, 8};  // Initialize an array with 'nofleds' elements
    int i;
    for (i = 0; i < nofleds; i++)  // Loop to print each element of the array
    {
        printf("%d  \n", arr[i]);
    }

    return 0;
}
