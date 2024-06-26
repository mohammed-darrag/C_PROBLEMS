#include <stdio.h>
#include <stdlib.h>

void string_print(char* str)
{
    int i;
    for (i = 0; i<str[i]; i++)
    {
        printf("%c", str[i]);
    }

    printf("%d \n");
}

void array_of_pointers_print(char**arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        string_print(arr[i]);
    }
}
int main()
{
    char s1[]="fatma !!";
    char *arr[6]={"ahmed mo!sen","abd@llah","o%ar","abde&rahman","s1","ab+bakr"};
	//arr[4][3]='g'; // ok will change it because it stored in stack; 
	//arr[2][3]='y'; // error because this data saved in ROD;
    array_of_pointers_print(arr,6);
    return 0;
}