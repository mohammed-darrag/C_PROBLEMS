#include <stdio.h>
#include <stdlib.h>

typedef enum{
sunday=2,
monday,
tuesday,
wednsday,
thursday,
friday
}day_t;

int main()
{

    day_t today,tomorrow,yesterday;
    today=wednsday;
    tomorrow=today+2;

    printf("%d %d %d",sizeof(today),today,tomorrow);


    return 0;

}