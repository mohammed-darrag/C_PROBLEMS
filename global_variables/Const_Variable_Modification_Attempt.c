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