//WAP to access the structure members using structure pointer and dot operator.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1, *ptr;
    ptr = &s1;

    strcpy(ptr->name, "anant");
    ptr->age = 19;
    ptr->marks = 85.5;

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}