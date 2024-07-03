//print odd numbers
#include<stdio.h>
void main()
{
    int n,i;
    printf("\n Enter your number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        printf("\n %d ",i);

    }
    printf("\n");
    getch();
}
