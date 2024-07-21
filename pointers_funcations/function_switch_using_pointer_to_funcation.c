
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

void test(int x, int n)
{
    switch (x)
    {
    case 1:
        f1001(n);
        break;
    case 2:
        f1002(n);
        break;
    case 3:
        f1003(n);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
}

int main()
{
    int x, n;
    while (1)
    {
        printf("Enter number of operation and the number \n");
        scanf("%d %d", &x, &n);
        test(x, n);
    }
    return 0;
}
