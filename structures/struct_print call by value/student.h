#ifndef STUDENT_H
#define STUDENT_H

struct student
{
    char name[20];
    int age;
    char grade;
};

void student_print(struct student print_data);

#endif // STUDENT_H
