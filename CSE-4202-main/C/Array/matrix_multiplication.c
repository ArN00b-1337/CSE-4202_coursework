#include <stdio.h>

int matInput(int r, int c, int mat[r][c]);
int matOutput(int r, int c, int mat[r][c]);
int matMultiplication(int r1, int c1, int mat1[r1][c1], int r2, int c2, int mat2[r2][c2], int res[r1][c2]);

int main()
{
    int r1, c1, r2, c2;
    printf("Enter the dimension of MAT1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the dimension of MAT2: ");
    scanf("%d %d", &r2, &c2);
    int mat1[r1][c1], mat2[r2][c2], res[r1][c2];
    if (c1 != r2)
    {
        printf("Dimension error!");
    }

    else
    {
        printf("Enter the elements of MAT1:\n");
        matInput(r1, c1, mat1);
        printf("Enter the elements of MAT2:\n");
        matInput(r2, c2, mat2);
        printf("Matrix 1:\n");
        matOutput(r1, c1, mat1);
        printf("Matrix 2:\n");
        matOutput(r2, c2, mat2);
        matMultiplication(r1, c1, mat1, r2, c2, mat2, res);
        printf("Matrix multiplication result:\n");
        matOutput(r1, c2, res);
        printf("The dimension of the resultant matrix is %d %d", r1, c2);
    }
    return 0;
}

int matInput(int r, int c, int mat[r][c])
{
    for(int j=0; j<r; j++)
    {
        for(int i=0; i<c; i++)
        {
            printf("Mat[%d][%d]= ", j, i);
            scanf("%d", &mat[j][i]);
        }
    }
    return mat[r][c];
}

int matOutput(int r, int c, int mat[r][c])
{
    for(int j=0; j<r; j++)
    {
        printf("|");
        for(int i=0; i<c; i++)
        {
            printf("%d ", mat[j][i]);
        }
        printf("|\n");
    }
    return mat[r][c];
}

int matMultiplication(int r1, int c1, int mat1[r1][c1], int r2, int c2, int mat2[r2][c2], int res[r1][c2])
{
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            res[i][j] = 0;
            for(int k=0; k<c1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return res[r1][c2];
}