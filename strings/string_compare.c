#include <stdio.h>
#include <stdlib.h>

int string_length(char* str)
{
    int i;
    for (i = 0; i<str[i]; i++)
    {

    }
    return i;
}
int string_compair(char*str,char*str2)
{
    int l1,l2;
    l1=string_length(str);
    l2=string_length(str2);
    if(l1=l2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[] = "Ahmed GAMAL mohamed";
    char str2[] = "Ahmed GAMAL mohamed";
    if(string_compair(str,str2))
    {
        printf("equal");

    }
    else
    {
        printf("not equal");

    }
    return 0;
}