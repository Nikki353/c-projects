#include<stdio.h>
void main()
{
    int num;
    printf("\n enter any number : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("\n given number is even - %d \n ",num);
    else
        printf("\n given number is odd - %d \n ",num);
        getch();
}
