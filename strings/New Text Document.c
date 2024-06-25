#include <stdio.h>
#include <stdlib.h>


void string_print(char* str)
{
    int i;
    for (i = 0; i<str[i] ; i++)
    {
        printf("%c", str[i]);
    }
}

int string_lowertoupper(char*str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]+'A'-'a';
        }
    }
    printf("\n");
}

int main()
{
    char str[] = "Ahmed GAMAL mohamed";
    string_print(str);
    string_lowertoupper(str);
    string_print(str);
    return 0;
}