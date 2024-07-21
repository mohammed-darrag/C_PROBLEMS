
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

 int call_back(int n1,int n2,int (*pf) (int ,int ))
 {
     int r;
     r=pf(n1,n2);
     return r;
 }

int main()
{
    int (*arr[4])(int ,int)={add,mul,sub,div};
    printf("%d   %d\n",call_back(5,10,add),call_back(5,10,arr[0]));



    return 0;
}