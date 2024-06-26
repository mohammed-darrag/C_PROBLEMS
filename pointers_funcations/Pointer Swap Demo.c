#include <stdio.h>
#include <stdlib.h>

void swap(char**p1,char**p2)
{
    char*temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;

}
int main()
{
    char x=5;
    char y=20;
    char*p1=&x;
    char*p2=&y;
    printf("x=%d  y=%d  *p1=%d   *p2=%d \n",x,y,*p1,*p2);
    printf("p1=%d  p2=%d\n",p1,p2);
    swap(&p1,&p2);
    printf("===============================\n");
    printf("x=%d  y=%d  *p1=%d   *p2=%d\n",x,y,*p1,*p2);
    printf("p1=%d  p2=%d\n",p1,p2);


    return 0;
}