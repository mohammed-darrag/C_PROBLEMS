#include <stdio.h>
#include "file1.h"

int main(void)
{
    int temp;
    scanf("%d", &temp);
    lcd_(temp);
    lcd_(5);
    lcd_(10);
    lcd_(20);
    lcd_(30);
    lcd_(40);
    return 0;
}
