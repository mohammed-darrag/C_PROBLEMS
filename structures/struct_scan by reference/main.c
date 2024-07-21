
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main()
{
    struct student s1 = {"dorg", 25, 'f'};
    struct student s2 = {"ahmed", 30, 'm'};
    struct student s3 = {"rasha", 22, 'b'};
    struct student s4;

    student_scan_by_reference(&s4);
    student_print_by_reference(&s4);

    return 0;
}