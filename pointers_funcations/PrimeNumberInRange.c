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

int main()
{

        int x,y;
        scanf("%d %d",&x,&y);
        for(int i=x; i<=y; i++)
        {
            if(isprime(i))
            {
                printf("prime numbers are %d\n",i);
            }
        }


    return 0;
}