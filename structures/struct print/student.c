#include "student.h"

void student_print_by_reference(struct student *ps)
{
    printf("%s  %d   %c\n", ps->name, ps->age, ps->grade);
}
