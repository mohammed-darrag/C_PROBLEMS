#include <stdio.h>
#include <stdlib.h>

int maxXor (int n1,int n2)
{
    int i,j,c;
    for(i=n1;i<=n2;i++)
    {
        for(j=n1;j<=n2;j++)
        {
            printf("%d  %d\n",i,j);
            c++;

        }
    }
    printf("number of cycles %d",c);

}

int main()
{
   maxXor(1,10);

   return 0;
}