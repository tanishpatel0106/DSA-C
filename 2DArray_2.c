#include <stdio.h>
#include <conio.h>

//A Program to generate pascal triangle

int main(){
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }
    printf("The Pascal triangle is: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}