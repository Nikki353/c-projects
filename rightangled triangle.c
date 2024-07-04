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
    if(a^2==b^2+c^2 || b^2==c^2+a^2 || c^2==a^2+b^2)
    {
        printf("\n THE TRIANGLE IS RIGHT ANGLED TRIANGLE ");
    }
    else
    {
        printf("\n THE TRIANGLE IS NOT RIGHT ANGLED TRIANGLE ");
    }
    getch();
}
