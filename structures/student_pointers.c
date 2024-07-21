#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[20];
    int age;
    char grade;
};

int main()
{
    // Initialize student structures
    struct student s1 = {"dorg", 25, 'f'};
    struct student s2 = {"ahmed", 30, 'm'};
    struct student s3 = {"rasha", 22, 'b'};
    
    // Initialize an array of student structures
    struct student course[50] = {
        {"hashemy", 35, 'o'},
        {"ters", 39, 'n'},
        {"deab", 18, 'c'}
    };
    
    // Modify the first element of the course array
    course[0] = s2;
    
    // Print the name and first character of the name of the first course student
    printf("%c \n", course[0].name[0]);
    printf("%s \n", course[0].name);
    
    // Pointer to student structure
    struct student *p1;
    p1 = &s1;
    
    // Print the details using the pointer
    printf("%s  %d  %c\n", p1->name, p1->age, p1->grade);
    
    // Print the details directly from s1
    printf("%s  %d  %c\n", s1.name, s1.age, s1.grade);

    return 0;
}
