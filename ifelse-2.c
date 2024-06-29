#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n enter a value :");
    scanf("%d",&a);
    printf("\n enter b value :");
    scanf("%d",&b);
    printf("\n enter c value :");
    scanf("%d",&c);
    if(a>b && a>c)
        printf("\n a is big %d",a);
    else
        if(b>a && b>c)
        printf("\n b is big %d",b);
    else
        printf("\n c is big %d",c);


