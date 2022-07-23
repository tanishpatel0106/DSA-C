/* Write a program to print the position of the smallest number of n numbers using arrays. */
#include <conio.h>
#include <stdio.h>

int main(){
    int n, arr[1000];
    printf("\n Enter the numbers of elements in the array: ");
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
    int small, pos;
    small = arr[0];
    pos = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<small){
            small = arr[i];
            pos = i;
        }
    }
    printf("\nSmallest element in the array is positioned at: %d", pos);
    printf("\nSmallest element is: arr[%d] = %d", pos, small);
    return 0;
}