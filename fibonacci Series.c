//print Fibonacci Series up to n terms
#include<stdio.h>
int main()
{
    int a=0,b=1,nextTerm,n,i;
    printf("\n enter any number : ");
    scanf("%d",&n);
    printf("\n Fibonacci Series : ");
    for(i=1;i<=n;i++)
    {
        printf("\n %d",a);
        nextTerm=a+b;
        a=b;
        b=nextTerm;
    }
    return 0;

}
