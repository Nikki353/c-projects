#include<stdio.h>
void main()
{
    int num[9]={1,3,5,7,9,11,13,17,19};
    int i,sum=0;
    printf("\n The array values are %d ",num[0]);
    printf("\n The array values are %d ",num[1]);
    printf("\n The array values are %d ",num[2]);
    printf("\n The array values are %d ",num[3]);
    printf("\n The array values are %d ",num[4]);
    for(i=0;i<5;i++)
    {
        sum+=num[i];
    }
    printf("\n The sum of numbers are %d ",sum);

}
