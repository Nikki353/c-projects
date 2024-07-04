#include<stdio.h>
void main()
{
    int a;
    printf("\n ENTER A VALUE : ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("\n A IS POSITIVE : %d ",a);
    }
    else
    {
        if(a<0)
        {
            printf("\n A IS NEGITIVE : %d",a);
        }
        else
        {
            printf("\n A IS ZERO : %d",a);
        }
    }
    getch();
}
