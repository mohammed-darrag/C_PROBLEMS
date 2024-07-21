#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[20];
    int age;
    char grade;
};

int main()
{
    struct student s1 = {"dorg", 25, 'f'}, s2 = {"ahmed", 30, 'm'}, s3 = {"rasha", 22, 'b'};
    
    // Print initial values
    printf("%s %d %c \n", s1.name, s1.age, s1.grade);
    printf("%s %d %c \n", s2.name, s2.age, s2.grade);
    printf("%s %d %c \n", s3.name, s3.age, s3.grade);
    
    // Modify s1
    s1.grade = 'A';
    s1.age = 28;
    s1.name[0] = 'z';
    s1.name[1] = 'o';
    s1.name[2] = 'z';
    s1.name[3] = 'z';
    
    // Assign s1 to s3
    s3 = s1;
    
    // Print values after modification
    printf("============After Editing=========== \n");
    printf("%s %d %c \n", s1.name, s1.age, s1.grade);
    printf("%s %d %c \n", s2.name, s2.age, s2.grade);
    printf("%s %d %c \n", s3.name, s3.age, s3.grade);
    printf("%d", sizeof(s1));

    return 0;
}
