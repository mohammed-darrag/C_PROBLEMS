
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *arr[5]={"ahmed mo!sen","abd@llah","o%ar","abde&rahman","ab+bakr"}; // this string in ROD 
    printf("%d \n",sizeof(arr));
    printf("%c\n",*(*(arr)+8));
    printf("%c\n",*(*(arr+1)+3));
    printf("%c\n",*(*(arr+2)+1));
    printf("%c\n",*(*(arr+3)+4));
    printf("%c\n",*(*(arr+4)+2));
   // printf("%c\n",arr[6][9])// wild pointer error;
   // printf("%c\n",arr[4][20])// garbage data;
    
    return 0;
}