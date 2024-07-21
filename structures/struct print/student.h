#ifndef STUDENT_H
#define STUDENT_H

struct student
{
    char name[20];
    int age;
    char grade;
};

void student_print_by_reference(struct student *ps);

#endif // STUDENT_H
