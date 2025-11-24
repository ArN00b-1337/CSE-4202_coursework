#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter the row of the matrix: ");
    scanf("%d", &r);
    printf("Enter the column of the matrix: ");
    scanf("%d", &c);

    int mat1[r][c], mat2[r][c], sum[r][c];
    printf("Mat1: \n");
    for(int j=0; j<r; j++)
    {
        for(int i=0; i<c; i++)
        {
            printf("mat1[%d][%d]= ", j, i);
            scanf("%d", &mat1[j][i]);
        }
    }
    printf("\nMat1: \n");
    for(int j=0; j<r; j++)
    {
        for(int i=0; i<c; i++)
        {
            printf("mat2[%d][%d]= ", j, i);
            scanf("%d", &mat2[j][i]);
        }
    }
    printf("Mat1: \n");
    for(int j=0; j<r; j++)
    {
        printf("|");
        for(int i=0; i<c; i++)
        {
            printf("%d ", mat1[j][i]);
        }
        printf("|\n");
    }
    printf("Mat2:\n");
    for(int j=0; j<r; j++)
    {
        printf("|");
        for(int i=0; i<c; i++)
        {
            printf("%d ", mat2[j][i]);
        }
        printf("|\n");
    }



     for(int j=0; j<r; j++)
    {
        for(int i=0; i<c; i++)
        {
            sum[j][i]= mat1[j][i] + mat2[j][i];
        }
    }
    printf("Sum:\n");
    for(int j=0; j<r; j++)
    {
        printf("|");
        for(int i=0; i<c; i++)
        {
            printf("%d ", sum[j][i]);
        }
        printf("|\n");
    }

}
