#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// A Program to demonstrate the use of nested structures

int main(){
    struct DOB{
        int day;
        int month;
        int year;
    };
    struct student{
        char name[20];
        int rollno;
        int marks;
        struct DOB dob;
    };
    struct student s1;
    printf("Enter the name of the student: ");
    scanf("%s", s1.name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &s1.rollno);
    printf("Enter the marks of the student: ");
    scanf("%d", &s1.marks);
    printf("Enter the day of birth: ");
    scanf("%d", &s1.dob.day);
    printf("Enter the month of birth: ");
    scanf("%d", &s1.dob.month);
    printf("Enter the year of birth: ");
    scanf("%d", &s1.dob.year);
    printf("The details of the student are: \n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.rollno);
    printf("Marks: %d\n", s1.marks);
    printf("Date of birth: %d/%d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    return 0;
}