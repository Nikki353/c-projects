#include<stdio.h>
void main()
{
    int num,sum=0,i;
    printf("\n enter any num : ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
           sum+=i;
        }
    }
    if(sum == num)
    {
        printf("\n %d is perfect num ",num);
    }
    else
    {
        if(sum>num)
        {
            printf("\n %d is abundant num ",num);
        }
        else
        {
            printf("\n %d is deficient num ",num);
        }
    }

}
