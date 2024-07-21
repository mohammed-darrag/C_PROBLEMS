#include <stdio.h>
#include "config.h"
#include "file1.h"

#if lcd_model == samsung
void lcd_(int n)
{
    printf("print on samsung %d \n", n);
}

#elif lcd_model == lg
void lcd_(int n)
{
    printf("print on lg %d \n", n);
}

#elif lcd_model == apple
void lcd_(int n)
{
    printf("print on apple %d \n", n);
}
#endif
