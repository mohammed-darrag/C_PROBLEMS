#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main()
{
    struct student s1 = {"dorg", 25, 'f'};
    struct student s2 = {"ahmed", 30, 'm'};
    struct student s3 = {"rasha", 22, 'b'};
    struct student course[50] = {{"hashemy", 35, 'o'}, {"ters", 39, 'n'}, {"deab", 18, 'c'}};
    student_scan_by_reference(course+3);
    student_print_all(course, 4);

    return 0;
}