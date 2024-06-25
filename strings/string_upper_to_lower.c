#include <stdio.h>
#include <stdlib.h>

void string_print(const char *str) {
    printf("%s\n", str);
}

int string_uppertolower(char *str) {
    int i;
    for (i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    printf("\n");
    return 0;
}

int main() {
    char str[] = "Ahmed GAMAL mohamed";
    string_print(str);
    string_uppertolower(str);
    string_print(str);
    return 0;
}
