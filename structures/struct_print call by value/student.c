#include "student.h"

void student_print(struct student print_data)
{
    printf("%s  %d   %c\n", print_data.name, print_data.age, print_data.grade);
}
