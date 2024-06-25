#include <stdio.h>
#include <stdlib.h>

static int x=40;


void f_setter(int n)
{
    if(x<1000)
    x=n;
    else
        x=1000;

}

int f_getter(void)
{
    return x;
}
