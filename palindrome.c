#include<stdio.h>
void main()
{
    int num,reversednum,reminder;
    printf("\n enter any number : ");
    scanf("%d",&num);
    while(num !=0)
    {
        reminder = num % 10;
        reversednum = reversednum*10 + reminder;
        num /=10;
    }
    if(num==reversednum)
    {
        printf("\n given number is palindrome ",num);
    }
    else
    {
        printf("\n given number is not palindrome ",num);
    }
    printf("\n");
    getch();
}
