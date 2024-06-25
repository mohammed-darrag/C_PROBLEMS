#include <stdio.h>
#include <stdlib.h>

void array_print(char*arr)
{
    int i;
    for(i=0;i<arr[i];i++)
    {
        printf("%c",arr[i]);
    }
}


int main()
{
    char arr[]={'m','o','s','t','a','f','a','a',0};
    printf("%d \n",sizeof(arr));
    array_print(arr);
    return 0;
}