#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// A Program to read and display the information of all the students in a class. Then edit the details of the ith student and redisplay the information of all the students.

int main(){
    struct student{
        char name[20];
        int rollno;
        int marks;
    };
    struct student s1[5];
    int i, j;
    for(i = 0; i < 5; i++){
        printf("Enter the name of the student: ");
        scanf("%s", s1[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d", &s1[i].rollno);
        printf("Enter the marks of the student: ");
        scanf("%d", &s1[i].marks);
    }
    printf("The details of the students are: \n");
    for(i = 0; i < 5; i++){
        printf("Name: %s\n", s1[i].name);
        printf("Roll number: %d\n", s1[i].rollno);
        printf("Marks: %d\n", s1[i].marks);
    }
    printf("Enter the index of the student whose details you want to edit: ");
    scanf("%d", &i);
    printf("Enter the new name of the student: ");
    scanf("%s", s1[i].name);
    printf("Enter the new roll number of the student: ");
    scanf("%d", &s1[i].rollno);
    printf("Enter the new marks of the student: ");
    scanf("%d", &s1[i].marks);
    printf("The details of the students are: \n");
    for(j = 0; j < 5; j++){
        printf("Name: %s\n", s1[j].name);
        printf("Roll number: %d\n", s1[j].rollno);
        printf("Marks: %d\n", s1[j].marks);
    }
    return 0;
}