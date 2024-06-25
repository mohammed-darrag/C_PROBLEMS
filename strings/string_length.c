#include <stdio.h>

void string_print(char* str)
{
    int i;
    for (i = 0; i<str[i]; i++)
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

int main()
{
    char str[] = "ahmed gamal";
    printf("len = %d \n", string_length(str));  
    printf("size = %lu \n", sizeof(str)-1);  // to not calculate the null
    string_print(str);
    return 0;
}