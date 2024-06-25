
#include <stdio.h>
#include <stdlib.h>

void print_binary(int i)
{
    int flag=0;

    for(int x=31; x>=0; x--)
    {
        if((i>>x)&1)
        {
            printf("1");
            flag=1;

        }
        else
        {
            if(flag==1)
            {
                printf("0");
            }

        }
    }
    printf("\n");

}

unsigned char reverse_binary(unsigned char n)
{
    unsigned char n2=0;
    for(int i=0;i<7;i++)
    {
        if((n>>i)&1)
        {
            n2=n2|(1<<(7-i));
            printf("n2=%d \n",n2);

        }
    }
    return n2;
}

int main()
{

    unsigned char y;
    unsigned char x=149;
    print_binary(x);
    y=reverse_binary(x);
    print_binary(y);
    printf("%d",y);

    return 0;
}