#include <stdio.h>
#include <stdlib.h>

void string_scan(char *str,int maxsize)
{
    int i=0;
    fflush(stdin);
    scanf("%c",&str[i]);
    for(; str[i]!='\n'&&i<maxsize-1;)
    {
        i++;
        scanf("%c",&str[i]);

    }
    str[i]=0;

}

int stringTOint(char*str)
{
    int i,num=0;
    for(i=0;str[i];i++)
    {
        num=num*10+(str[i]-'0');
    }
    return num;

}
int main()
{

    char str[20]={0};
    string_scan(str,20);
    int x=stringTOint(str);
    printf("%d\n",x);
    printf("%d",x+10);

    return 0;
}