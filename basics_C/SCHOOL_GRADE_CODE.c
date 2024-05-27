#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    while(1)
    {
        scanf("%d", &number);

        if (number >= 0 && number < 50) {
            printf("F \n");
        }
        else if(number >= 50 && number <= 59) {
            printf("D \n");
        }
        else if(number >= 60 && number <= 69) {
            printf("C \n");
        }
        else if(number >= 70 && number <= 79) {
            printf("B \n");
        }
        else if(number >= 80 && number <= 100) {
            printf("A \n");
        }
        else {
            printf("Invalid input \n");
        }
    }

    return 0;
}