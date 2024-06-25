#include <stdio.h>
#include <stdlib.h>


void string_print(char* str)
{
    int i;
    for (i = 0; i<str[i] ; i++)
    {
        printf("%c", str[i]);
    printf("\n");
}

int main()
{

   char *s="ahmed mohamed gamal";
   s[0]='K';  //it will not run because run time error will done due to read only data of this pointer *s
   printf("%c \n",s[0]);
   string_print(s);

    return 0;
}