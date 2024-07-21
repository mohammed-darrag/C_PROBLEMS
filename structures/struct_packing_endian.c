
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char c1;
    char c2;
    char c3;
    char c4;

}s_t;


int main()
{
    s_t s1;
    *(int*)&s1=0x04030201;
    printf("%d %d %d %d",s1.c1,s1.c2,s1.c3,s1.c4);
    return(0);

}