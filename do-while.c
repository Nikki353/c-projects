//write a c-program to print n natural numbers by using do while
#include<stdio.h>
void main()
{
    int i=1,j;
    printf("\n enter how many numbers you want : ");
    scanf("\n %d",&j);
    do
    {
        printf("\n %d",i);
        i++;
    }
    while(i<=j);
    getch();
}

