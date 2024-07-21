#include <stdio.h>
#include <stdlib.h>

void array_of_pointers_print(char(*arr)[20],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;arr[i][j]!=0;j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");

    }
}
int main()
{
    char arr[6][20]={"ahmed mo!sen","abd@llah","o%ar","abde&rahman","fatma !!","ab+bakr"};
    array_of_pointers_print(arr,6);
    return 0;
}