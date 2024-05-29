#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    float fr;
    float f1;
    while(1)
    {
        scanf("%f",&f1);
        n=f1;
        fr=f1-n;
        if(fr>=0.5)
        {
            n=n+1;
        }
        printf("%d \n",n);

    }

    return 0;
}