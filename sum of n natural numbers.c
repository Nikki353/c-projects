//write a c-program to print sum of 1st n natural numbers
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("\n How many numbers you want : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum+=i;
        printf("\n the I value is %d \n",i);
    }
    printf("\n Sum of %d natural numbers : %d ",n,sum);
    printf("\n");
    getch();
}
