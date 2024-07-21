
#include <stdio.h>
#include <stdlib.h>

int add(int n1, int n2)
{
    return n1 + n2;
}

int sub(int n1, int n2)
{
    return n1 - n2;
}

int mul(int n1, int n2)
{
    return n1 * n2;
}

int dev(int n1, int n2)
{
    return n1 / n2;
}

void f11(void)
{
    printf("hello \n");
    printf("it's \n");
    printf("me \n");
}

int main()
{
    int (*pf)(int n1, int n2);
    void (*pf2)(void);
    pf = mul;
    pf2 = f11;
    printf("%d \n", pf(4, 7));  // int x;  x=pf(4,7)  printf("%d",x);
    pf2();

    return 0;
}