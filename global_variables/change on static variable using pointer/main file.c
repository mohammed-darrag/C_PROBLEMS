#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *p = f_returnpointer();
    f6();
    f6();
    printf("%d\n", *p);
    return 0;
}