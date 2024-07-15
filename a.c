#include<stdio.h>
void main()
{
    int num,sum=0,i,m;
    printf("\n enter any num : ");
    scanf("%d",&m);
    for(i=1;i<=m/2;i++)
    {
        if(num%i==0)
        {
           sum+=i;
        }
    }
    if(sum == m)
    {
        printf("\n %d is perfect num ",m);
    }
    else
    {
        if(sum>m)
        {
            printf("\n %d is abundant num ",m);
        }
        else
        {
            printf("\n %d is deficient num ",m);
        }
    }

}

