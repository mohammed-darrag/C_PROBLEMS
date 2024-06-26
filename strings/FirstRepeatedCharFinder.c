#include <stdio.h>
#include <stdlib.h>


char strint_first_repeated_char(char *str)
{
    char count[256] = {0}; 
    int i;
    for (i = 0; str[i]; i++)
    {
        count[str[i]]++;
        if (count[str[i]] == 2)
        {
            return str[i];
        }
    }
    return 0;
}

int main()
{
    char str[] = "Mohamed Amed Morgan";
    printf("%c\n", strint_first_repeated_char(str));

    return 0;
}