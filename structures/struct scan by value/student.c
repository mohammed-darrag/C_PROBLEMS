
#include <stdio.h>
#include <stdlib.h>
#include "student.h"


void student_print_by_reference(struct student *ps)
{
    printf("%s  %d   %c\n", ps->name, ps->age, ps->grade);
}

void string_scan(char *str)
{
    int i = 0;
    scanf("%c", &str[i]);
    while(str[i] != '\n')
    {
        i++;
        scanf("%c", &str[i]);
    }
    str[i] = 0;
}

struct student student_scan(void)
{
    struct student s;
    printf("Enter the name:\n");
    fflush(stdin);
    string_scan(s.name);
    printf("Enter the age:\n");
    scanf("%d", &s.age);
    printf("Enter the grade:\n");
    fflush(stdin);
    scanf("%c", &s.grade);
    return s;
}