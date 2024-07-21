
#ifndef STUDENT_H
#define STUDENT_H

struct student
{
    char name[20];
    int age;
    char grade;
};


void string_scan(char *str);
void student_scan_by_reference(struct student *ps);
void student_print_by_reference(struct student *ps);

#endif // STUDENT_H
