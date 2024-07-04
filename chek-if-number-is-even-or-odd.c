#include<stdio.h>
void main()
{
    int a,b;
    printf("\n ENTER A VALUE : ");
    scanf("%d",&a);
    printf("\n ENTER B VALUE : ");
    scanf("%d",&b);
    if(a%2==0)
    {
        printf("\n A IS EVEN : %d ",a);
    }
    else
    {
        printf("\n A IS ODD : %d ",a);
    }
    if(b%2==0)
    {
        printf("\n B IS EVEN : %d ",b);
    }
    else
    {
        printf("\n B IS ODD : %d ",b);
    }
    getch();
}
