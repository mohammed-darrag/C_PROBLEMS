
#include <stdio.h>
#include <stdlib.h>
int main()
{
   float x=123.176;
   double y=123.176;

   printf("%f  %lf",x,y); error in x because mentisa equation

   return 0;
}

***************************************************

#include <stdio.h>
#include <stdlib.h>
int main()

   float x=123.176;
   double y=123.176;

   printf("%f  %lf",x%100,y);   //error cannot make remender in float number 


   return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()

   float x=123.176;
   double y=123.176;

   printf("%f  %lf",x/100,y);   // cannot make dividing in float number 


   return 0;
}

*********************************************
#include <stdio.h>
#include <stdlib.h>
int main()
{
   float x=10/3;
   double y=10/3;

   printf("%f  %lf",x,y);  // no appoximation because 10 is integer number and 3 also so that result permote to int  

   return 0;
}

********************************************
#include <stdio.h>
#include <stdlib.h>
int main()
{
   float x=10.0/3;
   double y=10.0/3;

   printf("%f  %lf",x,y);  //  appoximation because 10.0 is float number and 3.0 int so that result permote to float  

   return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main()
{
   float n1=10;
   float x=n1/3;
   double y=10.0/3;
   if(x==y)
   {
       printf("true\n");
   }
   else
   {
       printf("false\n");  // because accuracy in double more than accuracy in float  
   }

   printf("%f  %lf",x,y);

   return 0;
}

*************************************************************
#include <stdio.h>
#include <stdlib.h>
int main()
{
   float n1=10;
   double x=n1/3;
   double y=10.0/3;
   if(x==y)
   {
       printf("true\n");
   }
   else
   {
       printf("false\n");  //also false because n1 float and n1/3 this result permote to float although  
   }

   printf("%f  %lf",x,y);

   return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main()
{
   double n1=10;
   double x=n1/3;
   double y=10.0/3;
   if(x==y)
   {
       printf("true\n");  // true because all values permote to double
   }
   else
   {
       printf("false\n");
   }

   printf("%f  %lf",x,y);

   return 0;
}

**********************************************************************************

#include <stdio.h>
#include <stdlib.h>
int main()
{
   float n1=10;
   double x=n1/3;
   double y=10.0/3;

   printf("%d %d %d\n",sizeof(float),sizeof(double),sizeof(5.5));
   if(10.0/3==x)
   {
       printf("true\n");
   }
   else
   {
      printf("false\n");  //false because 10.0 permote to double and n1/3 permote to float although x is double 
   }

   return 0;
}

*****************************************************

#include <stdio.h>
#include <stdlib.h>
int main()
{
   double n1=10;
   double x=n1/3;
   double y=10.0/3;

   printf("%d %d %d\n",sizeof(float),sizeof(double),sizeof(5.5));
   if(10.0/3==x)
   {
       printf("true\n");  // true because all values her permote to double
   }
   else
   {
      printf("false\n");
   }

   return 0;
}