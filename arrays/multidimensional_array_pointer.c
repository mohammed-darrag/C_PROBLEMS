#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    int (*p)[5]=arr;
    int *p1=arr;
    printf("%d %d %d %d %d \n",arr[1][2],p1[10],p[2][3],p[1][6],p[2][-1]);
    printf("%d %d\n",p[1],p1[3]); // adresss   data 


    return 0;
}
