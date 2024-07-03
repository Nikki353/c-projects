//write a c program to print a factorial number
#include<stdio.h>
void main()
{
    int n,factorial=1,i;
    printf("\n enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("\n The factorial value %d is : %d\n ",n,factorial);
}
