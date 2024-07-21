#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int arr[]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]=5; //normal pointer in draw
    printf("%d %d  %d",sizeof(p),p,p+1); //difference between p+1 - p =40 this is the advantage for pointer to array has step 40 byte 


    return 0;
}