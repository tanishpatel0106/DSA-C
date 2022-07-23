#include <stdio.h>
#include <conio.h>

//A Program to transpose a 3*3 matrix

int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element at row %d and column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elements of the matrix are: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}