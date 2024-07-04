#include<stdio.h>
void main()
{
    int age;
    printf("\n ENTER YOUR AGE : ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("\n THIS PERSON IS ELIGIBLE TO VOTE : %d",age);
    }
    else
    {
        printf("\n THIS PERSON IS NOT ELIGIBE TO VOTE : %d",age);
    }
    getch();
}
