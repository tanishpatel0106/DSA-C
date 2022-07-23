#include <stdio.h>
#include <conio.h>

// A program to input two m*n matrices and then calculate their sum and store it in a third m*n matrix

int main(){
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int arr1[n][m], arr2[n][m], arr3[n][m];
    printf("Enter the elements of the first matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The elements of the first matrix are: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("The elements of the second matrix are: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the two matrices is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}