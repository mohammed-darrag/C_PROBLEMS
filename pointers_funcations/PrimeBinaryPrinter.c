
#include <stdio.h>
int isprime(int n)
{
    if(n<2)
    {
        return(0);
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}
void print_binary(int i)
{
    for(int x=31; x>=0; x--)
    {
        if((i>>x)&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

}

int main()
{

    int x,y;
    scanf("%d %d",&x,&y);
    for(int i=x; i<=y; i++)
    {
        if(isprime(i))
        {
            printf("This number %d is prime \n",i);
            print_binary(i);
        }
    }


    return 0;
}