#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    i=f_getter();
    f_setter(1005);
    int z= f_setter(300)+50;



    printf("%d   %d   %d\n", i,f_setter(300),z);

    return 0;
}
