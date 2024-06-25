
#include <stdio.h>
#include <stdlib.h>

void string_print(char*str)
{
    int i;
    for(i=0;i<str[i];i++)
    {
        printf("%c",str[i]);
    }
}

char* fun33(int n)
{
    char *s;
    if(n==1)
    {
        s="hello";
    }
    else if(n==2)
    {
        s="welcome";
    }
    else
    {
       s="goodbye" ;
    }
    return s;
}

int main()
{
    char str[]={0};
    char *s2=str; // i must write *s2 because it will rececive string that's meaning receive address so that should write s2 in shape of pointer  
    s2=fun33(1);
    string_print(s2);

    return 0;
}
