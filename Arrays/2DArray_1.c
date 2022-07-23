#include <stdio.h>
#include <conio.h>

//A program to print elements of a 2D array

int main(){
    int n, m;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}