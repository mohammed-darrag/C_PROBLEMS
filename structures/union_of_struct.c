
#include <stdio.h>
#include <stdlib.h>

typedef union {
    char arr[8];
    struct {
        char c1;
        char c2;
        char c3;
        char c4;
        char c5;
        char c6;
        char c7;
        char c8;
    };
    struct {
        short s1;
        short s2;
        short s3;
        short s4;
    };
    struct {
        int i1;
        int i2;
    };
    long long l1;
} u_t;

int main() {
    long long z ;


    ((u_t*)&z)->i1 = 10;


  
    printf("char arr: %d %d %d %d %d %d %d %d\n",
           ((u_t*)&z)->c1, ((u_t*)&z)->c2, ((u_t*)&z)->c3, ((u_t*)&z)->c4,
           ((u_t*)&z)->c5, ((u_t*)&z)->c6, ((u_t*)&z)->c7, ((u_t*)&z)->c8);

    printf("short s1: %d\n", ((u_t*)&z)->s1);
    printf("short s2: %d\n", ((u_t*)&z)->s2);
    printf("short s3: %d\n", ((u_t*)&z)->s3);
    printf("short s4: %d\n", ((u_t*)&z)->s4);

    printf("int i1: %d\n", ((u_t*)&z)->i1);
    printf("int i2: %d\n", ((u_t*)&z)->i2);

    printf("long long l1: %lld\n", ((u_t*)&z)->l1);
    printf("%d ",z);


    return 0;
}