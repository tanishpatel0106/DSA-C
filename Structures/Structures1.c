#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//A Program to demonstrate the use of structures

int main(){
    struct student{
        char name[20];
        int rollno;
        int marks;
    };
    struct student s1;
    printf("Enter the name of the student: ");
    scanf("%s", s1.name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &s1.rollno);
    printf("Enter the marks of the student: ");
    scanf("%d", &s1.marks);
    printf("The details of the student are: \n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.rollno);
    printf("Marks: %d\n", s1.marks);
    return 0;
}
