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
    student_print_by_reference(p);  
    student_print_by_reference(&s2);  

    return 0;
}
