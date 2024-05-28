
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    while (1) {
        scanf("%d", &x);
        for (int i = 31; i >= 0; i--) {
            if ((x >> i) & 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}