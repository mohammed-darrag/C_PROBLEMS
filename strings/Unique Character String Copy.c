#include <stdio.h>
#include <stdlib.h>

void string_print(char* str)
{
    int i;
    for (i = 0; str[i]; i++)
    {
        printf("%c", str[i]);
    }
}

void string_copy(char* str, char* copy)
{
    int i, k = 0;

    char count[256] = {0};
    for (i = 0; str[i]; i++)
    {
        if (count[str[i]] == 0)
        {
            copy[k] = str[i];
            count[str[i]] = 1;
            k++;
        }
    }
    copy[k] = 0;

int main()
{
    char str[] = "Mohamed Ahmed Morgan";
    char s[100];
    string_copy(str, s);
    string_print(s);

    return 0;
}
