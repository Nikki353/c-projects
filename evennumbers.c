//write a c program to print even numbers in between 1 to nth number
#include<stdio.h>
void main()
{
    int n,i;
    printf("\n Enter any number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        printf("\n %d",i);
    }

}
