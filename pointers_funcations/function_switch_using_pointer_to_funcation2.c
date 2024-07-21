#include <stdio.h>
#include <stdlib.h>

void f1001(int n)
{
    printf("1001 %d \n", n);
    printf("1001 %d \n", n);
    printf("1001 %d \n", n);
}

void f1002(int n)
{
    printf("hello %d \n", n);
    printf("hello %d \n", n);
    printf("hello %d \n", n);
}

void f1003(int n)
{
    printf("%d \n", n);
    printf("%d \n", n);
    printf("%d \n", n);
}

void test2(int x, int n, void (*arr_pf[])(int))
{
    arr_pf[x - 1](n);
}

int main()
{
    void (*arr_pf[3])(int) = {f1001, f1002, f1003}; // void because it not return value it just print
    int x, n;
    while (1)
    {
        printf("Enter number of operation and the number: ");
        scanf("%d %d", &x, &n);
        test2(x, n, arr_pf);
    }
    return 0;
}