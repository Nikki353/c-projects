#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n ENTER A VALUE : ");
    scanf("%d",&a);
    printf("\n ENTER B VALUE : ");
    scanf("%d",&b);
    printf("\n ENTER C VALUE : ");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("\n A IS BIG ");
    }
    else
    {
        if(b>a&&b>c)
        {
            printf("\n B IS BIG ");
        }
        else
    {
        printf("\n C IS BIG ");
    }
    }

    getch();
}
