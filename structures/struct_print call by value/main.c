#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main()
{
    struct student s = {"dorg", 25, 'f'};
    struct student s2 = {"ahmed", 30, 'm'};
    struct student s3 = {"rasha", 22, 'b'};
    struct student course[50] = {{"hashemy", 35, 'o'}, {"ters", 39, 'n'}, {"deab", 18, 'c'}};
    struct student *p;

    p = &s3;
    student_print(s);
    student_print(course[0]);
    student_print(*p);

    return 0;
}
