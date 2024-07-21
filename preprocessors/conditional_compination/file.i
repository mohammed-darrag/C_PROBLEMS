# 1 "main.c"
#define version 2 

int main(void)
{
   #if version == 1
   printf("version 1");
   
   #elif version == 2
   printf("version 2 \n");
   int x = 5;
   printf("%d \n", x);
   
   #else
   printf("not one or two\n");
   #endif

   return 0;
}
