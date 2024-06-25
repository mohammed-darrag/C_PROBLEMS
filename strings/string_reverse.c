
#include <stdio.h>

void string_print(char* str)
{
    int i;
    for (i = 0; i<str[i] ; i++)
    {
        printf("%c", str[i]);
    }
}

int string_length(char* str)
{
    int i;
    for (i = 0; i<str[i]; i++)
    {

    }
    return i;
}

void string_reverse(char* str)
{
    int i = 0;
    int j = string_length(str)-1 ;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char str[] = "ahmed gamal mohamed";
    printf("len = %d \n", string_length(str));
    printf("size = %lu \n", sizeof(str) - 1);
    string_print(str);
    string_reverse(str);
    printf("\nAfter reversal:\n");
    string_print(str);
    return 0;
}