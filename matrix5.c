#include<stdio.h>
void main()
{
    int matrix[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter the values %d row and %d column : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n matrix : \n");
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
}
