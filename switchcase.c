#include<stdio.h>
void main()
{
    int num,a,b,c;
    printf("\n enter any option from 1 to 5 : ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
           printf("\n enter a value : ");
           scanf("%d",&a);
           printf("\n enter b value : ");
           scanf("%d",&b);
           c=a+b;
           printf("\n the sum is : %d ",c);

        break;
        case 2:
           printf("\n enter a value : ");
           scanf("%d",&a);
           printf("\n enter b value : ");
           scanf("%d",&b);
           c=a-b;
           printf("\n the subtraction is : %d ",c);

        break;
        case 3:
           printf("\n enter a value : ");
           scanf("%d",&a);
           printf("\n enter b value : ");
           scanf("%d",&b);
           c=a/b;
           printf("\n the division is : %d ",c);

        break;
        case 4:
           printf("\n enter a value : ");
           scanf("%d",&a);
           printf("\n enter b value : ");
           scanf("%d",&b);
           c=a*b;
           printf("\n the multiplication is : %d ",c);

        break;
        case 5:
           printf("\n enter a value : ");
           scanf("%d",&a);
           printf("\n enter b value : ");
           scanf("%d",&b);
           c=a*a+b*b;
           printf("\n the answer is : %d ",c);
        break;

    }
}
