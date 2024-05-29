
1:

#include <stdio.h>
#include <stdlib.h>
int main()
{
   float f1=5.5,fr;
   int n;
   printf("%d",(int)f1);
    return 0;
}

2:

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n=300;
   printf("%d",*(&n));
    return 0;
}

3:

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n=300;
   printf("%d",*(char*)&n);
    return 0;
}

4:

#include <stdio.h>
#include <stdlib.h>
int main()
{
   unsigned int n1=2000000000;
   unsigned int n2=3000000000;
   unsigned long long n3=n1+n2; // n3=705,032,704 because n1 int and n2 int the value will permote to int 
   printf("%llu %u %u",n3,n2,n1);



    return 0;
}

solution for  "problem 4"this problem u should define one of inputs of sumbmation operation as along long 

#include <stdio.h>
#include <stdlib.h>
int main()
{
   unsigned int n1=2000000000;
   unsigned int n2=3000000000;
   unsigned long long n3=(long long )n1+n2; 
   printf("%llu %u %u",n3,n2,n1);



    return 0;
}