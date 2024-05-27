#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("========================\n");

    if(x>=y)
    {
        for(int i=x; i>=y ; i--)
        {
            printf("%d \n",i);
        }

    }
    else
    {
        int temp=x;
        x=y;
        y=temp;
        for(int i=x; i>=y ; i--)
        {
            printf("%d \n",i);
        }
    }

    return 0;
}