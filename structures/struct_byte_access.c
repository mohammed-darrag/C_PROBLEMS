
#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char c1;
    char c2;
    char c3;
    char c4;
} s_t;

int main() {
    int x = 300;
    s_t *p =&x; 
    p->c1 = 2;
	p->c2= 1;
    p->c3=1;
    p->c4=1;

    printf("%d %d\n", p->c1, x); 

    return 0;
}


or 

#include <stdio.h>

typedef struct {
    char c1;
    char c2;
    char c3;
    char c4;
} s_t;

int main()
{
      int x;
      s_t w;
      w.c1=111;
     ((s_t*)&x)->c1=2;
     ((s_t*)&x)->c2=1;
     ((s_t*)&x)->c3=1;
     ((s_t*)&x)->c4=1;

    printf("%d %d\n",w.c1, x);

    return 0;
}
