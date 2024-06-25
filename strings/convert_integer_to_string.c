#include <stdio.h>
#include <stdlib.h>

void string_print(char* str)
{
    int i;
    for (i = 0; i<str[i] ; i++)
    {
        printf("%c        ", str[i]);
    }
    printf("\n");
}

void intTOstr(int num,char*str)
{
    int i,rem;
    if(num==0)
    {
        str[0]='0'; // advanced option if i input just zero convert this zero to string 
        str[1]=0; //null terminator  
    }
    for(i=0;num;i++)
    {
        rem=num%10;
        str[i]=rem+'0'; // str[i] now is a string 
        num=num/10;
    }
    str[i]=0; //null terminator 
    string_reverse(str);

}
int main()
{
    char str[100]={0};
    int x;
    while(1)
    {
    scanf("%d",&x);
    intTOstr(x,str);
    string_print(str);
    }


    return 0;
}