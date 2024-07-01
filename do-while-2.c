//write a c-program to calculate the sum of digits of numbers
#include<stdio.h>
void main()
{
    int i,sum=0,j;
    printf("\n enter any number : ");
    scanf("%d",&i);
    do
    {
        j=i%10;
        sum+=j;
        i/=10;
    }
    while(i!=0);
    printf("\n %d ",sum);
    i++;
}
