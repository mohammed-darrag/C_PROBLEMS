#include <stdio.h>

int main()
{
    unsigned long long x ;
    scanf("%u",&x);

    unsigned char *p1 = &x;

    for (int i = 0; i < sizeof(unsigned long long); i++)
    {
        printf(" DEC:%d     Hex:%X\n",*p1,*p1);
        p1++;

    }

    return 0;
}