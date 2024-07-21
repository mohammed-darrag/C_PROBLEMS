
#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday
} day_t;

day_t day_fun(day_t day)
{
    switch (day)
    {
    case sunday:
        printf("work \n");
        break;
    case monday:
        printf("holiday \n \n");
        break;
    }
    return day;
}

int main()
{
    day_t today, tomorrow, yesterday;
    today = sunday;
    if(day_fun(today)==sunday)
    {
        printf("inta fola \n");

    }
    else
    {
        printf("inta not fola \n");
    }
    printf("%d %d ", sizeof(today), today);

    return 0;
}
