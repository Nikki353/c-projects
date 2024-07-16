#include <stdio.h>
void main()
{
    int matrix[3][3],i,j;
    printf("Enter elements of Matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
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
