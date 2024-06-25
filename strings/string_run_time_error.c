#include <stdio.h>
#include <stdlib.h>

void string_print(char* str)
{
    int i;
    str[3]='Z'; // here i added option modified letter z but string_print(s) and  string_print("lionmytr") cannot modified because data saved in ROD 
    for (i = 0; i<str[i] ; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char str[]="fatma !!";
    char *s="ahmed mohamed";
    string_print(str); //will print  
    string_print(s); // run time here
    string_print("lionmytr"); // run time here 


    return 0;
}