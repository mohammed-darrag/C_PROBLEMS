#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int b:2;
    unsigned int b2:5;
    unsigned int b3:10;
    int x;
} s_t;

int main()
 {
    s_t s1;
    printf("%zu\n", sizeof(s1));
    s1.b2=19;
    printf("%d",s1.b2);


    return 0;
}