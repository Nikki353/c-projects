#include<stdio.h>
void main()
{
    int i=1,j;
    printf("\n enter how many numbers you want : ");
    scanf("\n %d",&j);
    while(i<=j)
    {
        printf("\n %d",i);
        i++;
    }
    getch();
}
