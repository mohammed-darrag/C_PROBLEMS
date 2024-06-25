#include <stdio.h>
#include <stdlib.h>

void string_print(char* str)
{
    int i;
    for (i = 0; i<str[i] ; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

void string_scan(char *str)
{
    int i=0;
    scanf("%c",&str[i]);
    for(;str[i]!='\n';)
    {
        i++;
        scanf("%c",&str[i]);

    }
    str[i]=0;

}
int main()
{
     char str[100]={0};
     while (1)
     {
       string_scan(str);
       string_print(str);
     }
    return 0;
}