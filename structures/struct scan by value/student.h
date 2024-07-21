#ifndef STUDENT_H
#define STUDENT_H

struct student
{
    char name[20];
    int age;
    char grade;
};

struct student student_scan(void);
void string_scan(char *str);
void student_print_by_reference(struct student *ps);

#endif // STUDENT_H