#include<stdio.h>
void main()
{
    int matrix1[3][3],matrix2[3][3];
    int i,j,resultmatrix[3][3];
    int num,div[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter the values %d row and %d column : ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\n matrix 1: \n");
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            printf(" %d ",matrix1[i][j]);
        }
        printf("\n");
    }
    /*
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter the values %d row and %d column : ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\n matrix 2: \n");
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            printf(" %d ",matrix2[i][j]);
        }
        printf("\n");
    }
*/

}
