#include<stdio.h>
void testfunction()
{
    int sv,n,sum=0;

    printf("\n enter n value : ");
    scanf("%d",&n);
     for(sv=0;sv<=n;sv++)
    {
        sum+=sv;
    }
    printf("\n sum of %d variables : %d ",n,sum);



}
void main()
{
    testfunction();
    printf("\n");

    int sv,sum=0,b;
    printf("\n enter sv value : ");
    scanf("%d",&sv);



    if(sv%2==0)
    {
        printf("\n sv is an even number : %d ",sv);
    }
    else
    {
        printf("\n sv is an odd number : %d ",sv);
    }
    printf("\n");


     printf("\n enter b value : ");
     scanf("%d",&b);
    for(sv=0;sv<=b;sv++)
    {
        sum+=sv;
    }
    printf("\n sum of %d variables : %d ",b,sum);

    printf("\n");
}
