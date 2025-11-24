#include <stdio.h>
int main()
{
    int i, j, a[3][3], b[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    int n=3;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for (i = 0; i < 3; i++)
    {
        printf("| ");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("|\n");
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        printf("| ");
        for (j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ", b[i][j]);
        }
        printf("|\n");
    }
}