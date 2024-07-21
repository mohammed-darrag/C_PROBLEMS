#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]=arr;
    printf("%d %d %d %d %d",p,*p,p+1,*p+1,*(*(p)+1));

    return 0;
}