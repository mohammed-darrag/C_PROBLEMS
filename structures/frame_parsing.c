#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned char x;
    unsigned short y;
    unsigned char z;
} frame_t;

frame_t frame_parsing(char *arr)
{
    frame_t s;
    int *p = (int *)arr;
    printf("%d %d %d\n",*p,p,arr);
    s.x = *p & 0x1F;
    s.y = (*p >> 5) & 0x1FFF;
    s.z = (*p >> 18) & 0x7F;
    return s;
}

int main()
{
    char arr[5] = {5,13,45,34,6};
    frame_t s = frame_parsing(arr);
    printf("x: %d\n", s.x);
    printf("y: %d\n", s.y);
    printf("z: %d\n", s.z);

    return 0;
}