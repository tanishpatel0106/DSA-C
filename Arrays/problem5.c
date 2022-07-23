/* Write a program to enter n number of digits. Form a number using these digits. */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int n, arr[1000];
    printf("\nEnter how many digits you want in the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the digit at position %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int i = 0;
    int number = 0;
    while (i<n)
    {
        number = number + (arr[i] * pow(10,i));
        i++;
    }
    printf("The number is: %d", number);
}