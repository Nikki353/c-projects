#include<stdio.h>
void main()
{
    int matrix1[3][3]={{11, 12, 13},{14, 5, 6},{7, 8, 9}};
    int matrix2[3][3]={{9, 8, 7},{6, 5, 4},{3, 2, 1}};
    int resultmatrix[3][3];
    int i,j;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            resultmatrix[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
    printf("\n matrix 1 : \n");
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0;j < 3; j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n matrix 2 : \n");
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n the sub of matrices : \n");
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d ",resultmatrix[i][j]);
        }
        printf("\n");
    }




}
