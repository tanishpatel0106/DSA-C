/*Write a program to find whether the array of integers contains a duplicate number.*/
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
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((arr[i] == arr[j]) && (i != j)){
                flag = 1;
                printf("\nDuplicate numbers found at locations %d & %d", i, j);
                printf("\nThe duplicate entry is: %d", arr[i]);
            }
        }
    }
    if (flag == 0)
    {
        printf("\nNo duplicates found");
    }
    return 0;
}