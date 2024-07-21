
#include "student.h"
#include <stdio.h>
#include <stdlib.h>

void student_print_all(struct student *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%-20s%-12d%-12c\n", (arr + i)->name, (*(arr + i)).age, arr[i].grade);
    }
}

void string_scan(char *str)
{
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF && i < 19)
    {
        str[i++] = ch;
    }
    str[i] = '\0';
}

void student_scan_by_reference(struct student *ps)
{
    printf("Enter the name:\n");
    fflush(stdin); // Consider using alternative to clear input buffer
    string_scan(ps->name);
    printf("Enter the age:\n");
    scanf("%d", &ps->age);
    printf("Enter the grade:\n");
    fflush(stdin); // Consider using alternative to clear input buffer
    scanf("%c", &ps->grade);
}
