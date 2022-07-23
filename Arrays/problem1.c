/* Write a program to read and display n numbers using an array*/
#include <conio.h>
#include <stdio.h>

int main(){
    int n, arr[1000];
    printf("\nEnter the numbers of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d", i, arr[i]);
    }
    return 0;
}