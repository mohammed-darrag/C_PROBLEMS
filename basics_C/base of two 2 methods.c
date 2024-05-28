
#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        int number;

        printf("Enter a number: ");
        scanf("%d", &number);


        if (number > 0 && (number & (number - 1)) == 0)
        {
            printf("%d is a power of two.\n", number);
        }
        else
        {
            printf("%d is not a power of two.\n", number);
        }
    }


    return 0;
}


// second code 

#include <stdio.h>
#include <stdlib.h>
int base_of(unsigned int n)
{
    if(n==0)
    {
        return 0;
    }

    for(;n>1;)
    {
        if(n%2==1)
        {
            return 0;
        }
        n=n/2;
    }
    return 1;
}

int main()
{

while(1)
{
    unsigned int n;

    scanf("%u",&n);
    if(base_of(n))
    {
        printf("base of 2\n");

    }
    else
    {
          printf("not base of 2\n");
    }

}
    return 0;
}