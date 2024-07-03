//print numbers from 1 to n
#include<stdio.h>
void main()
{
    int n,i;
    printf("\n enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        printf("\n %d",i);
    }
    printf("\n");
    getch();
}
