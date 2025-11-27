//WAP to pass a structure as an argument into functions using Call by value and Call by reference.
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
void displayByValue(struct Student stu) {
    printf("Call by Value:\n");
    printf("Name: %s\n", stu.name);
    printf("Age: %d\n", stu.age);
    printf("Marks: %.2f\n", stu.marks);
}
void displayByReference(struct Student *stu) {
    printf("Call by Reference:\n");
    printf("Name: %s\n", stu->name);
    printf("Age: %d\n", stu->age);
    printf("Marks: %.2f\n", stu->marks);
}
int main() {
    struct Student student1;
    strcpy(student1.name, "Anant");
    student1.age = 19;
    student1.marks = 85.5;

    displayByValue(student1);
    displayByReference(&student1);

    return 0;
}