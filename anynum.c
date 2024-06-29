#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num;
    system("cls");
    printf("\n enter any number : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("\n given number is even - %d \n ",num);
    else
        printf("\n given number is odd - %d \n ",num);
        getch();
}
