/*Write a program to find the mean of n numbers using arrays*/
#include <stdio.h>
#include <conio.h>

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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float mean;
    mean = (float)sum/n;
    printf("\nThe sum of all the elements in the array is: %d", sum);
    printf("\nThe mean of all the elements in the array is: %.2f", mean);
    return 0;
}