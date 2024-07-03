//checking if number is prime
#include<stdio.h>
void main()
{
    int n,isprime=1,i;
    printf("\n enter any number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=0;
        }
        break;
    }
    if(isprime)
    {
        printf("\n %d is prime ",n);
    }
    else
    {
        printf(" \n %d is not prime ",n);

    }
    printf("\n");
    getch();

}
