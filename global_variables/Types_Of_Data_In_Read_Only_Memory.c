
1 : constant string 

#include <stdio.h>
#include <stdlib.h>

void string_print(char* str)
{
    int i;
    str[3]='m'; // give you run time error because const string for read only not to edit
    for (i = 0; str[i] ; i++)
    {

        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
   char *s = "ahmed mohamed gamal";

   printf("%c \n", s[0]);
   string_print(s);

   return 0;
}

2:static local variable initalized 

void array_print(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int *f2(void)
{
    static int arr[]={1,2,3,4,5};
    arr[3]={3}; //code will give you run time error 
    int*p=arr;
    return p;
}

int main()
{
  int*pointer=f2();;
  array_print(pointer,5);
  pointer[3]=20;
  array_print(pointer,5);

    return 0;
}

3:constant global

const int g=10;  // rod

int main()
{
  int f=g*4;
  int x=g+1;

  printf("%d \n",g);
  int *p=&g;
  *p=150;
  printf("%d \n",g);


    return 0;
}