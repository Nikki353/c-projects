//to print only onr table at a time
#include<stdio.h>
void main()
{
    int i,j,start,end;
    printf("\n enter which table you want : ");
    scanf("%d",&start);
    printf("\n enter how many numbers you want : ");
    scanf("%d",&end);
    for(i=start;i<=start;i++)
    {
        for(j=1;j<=end;j++)
        {
            printf("\n %d * %d = %d",i,j,i*j);
        }
        printf("\n");
    }
    getch();
}

