#include <stdio.h>
#include <conio.h>

//A Program to multiply two m*n matrices

int main(){
    int m, n, p, q;
    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &n);
    int arr1[m][n];
    printf("Enter the elements of the first matrix: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element at row %d and column %d: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &q);
    int arr2[p][q];
    printf("Enter the elements of the second matrix: ");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter the element at row %d and column %d: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    if (n == q)
    {
        int arr3[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                arr3[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("The product of the two matrices is: \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
        return 0;        
    }
    else
    {
        printf("The multiplication of the two matrices is not possible.");
    }
}