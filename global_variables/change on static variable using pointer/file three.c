#include <stdio.h>
#include <stdlib.h>

static int x=40;

void f4(void)
{
    printf("f4: x=%d    &x:=%p\n", x,&x);
}

int f5(void)
{
    return x;
}

void f6(void)
{
    x++;
}

int* f_returnpointer(void)
{
    return &x;
}