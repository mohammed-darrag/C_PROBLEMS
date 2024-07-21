
#include <stdio.h>
#include <stdlib.h>

typedef union{
    int i1;
    int i2;
    char c1;
    unsigned char c2;
} u_t;



int main()
{

    u_t u1;
    u1.i1=300;
    printf("%d %d %d %d\n",u1.i1,u1.i2,u1.c1,u1.c2);
    u1.c1=255;
    printf("%d %d %d %d\n",u1.i1,u1.i2,u1.c1,u1.c2);


    return 0;
}