
#include <stdio.h>
#include <stdlib.h>

extern int x;


    int f1(int n)
    {
        int i=5;
        i++;
        printf("f1:=%d  x=%d",i,x);

    }

    void f2(void)
    {
        x++;

    }
     void f3(void)
    {
        x=50;

    }
    int main()
    {
        int i=0;
        printf("main:x=%d   \n",x);
        x=70;
        f4();
        f3();
        f2();
        f1(4);
        printf("main:x=%d \n",x);

        return 0;

    }
