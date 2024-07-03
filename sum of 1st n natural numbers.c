//sum of 1st n natural numbers
#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("\n Enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum+=i;
    }
        printf("\n the sum of  %d natural numbers  is : %d\n ",n,sum);


}
