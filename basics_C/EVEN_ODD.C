#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            printf("number is even");
        }
        else
        {
            printf("number is odd");
        }
    }

    return 0;
}