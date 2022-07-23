/* Write a program to find the second largest of n numbers using an array. */
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
        printf("\n arr[%d] = %d", i, arr[i]);
    }
    int large, s_large;
    large = arr[0];
    s_large = arr[1];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>large){
            large = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != large){
            if(arr[i] > s_large){
                s_large = arr[i];
            }
        }
    }
    printf("\nThe largest of the array is: %d", large);
    printf("\nThe second largest of the array is: %d", s_large);
    return 0;
}