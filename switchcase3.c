#include<stdio.h>
void main()
{
    int number;
    int num,sum=0,year,reversednum=0,originalnum,reminder;
    int n,m,factorial=1,i;
    printf("\n enter the option you want : ");
    scanf("%d",&number);
    switch(number)
    {
    case 1:
        printf("\n enter an integer : ");
        scanf("%d",&n);
        originalnum=n;
        while(n !=0)
        {
            reminder=n%10;
            reversednum=reversednum*10+reminder;
            n/=10;

        }
        if(originalnum==reversednum)
        {
            printf("\n the number is a palindrome",originalnum);
        }
        else
        {
            printf("\n the number is not palindrome ",originalnum);
        }
    case 2:
        printf("\n enter any value : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            factorial*=i;
        }
        printf("\n the factorial of %d is  : %d\n ",n,factorial);
    case 3:
        printf("\n enter any year : ");
        scanf("%d",&year);
        if(year%4==0 && year%100 !=0 || year%400==0)
        {
            printf("\n %d is a leap year ",year);
        }
        else
        {
            printf("\n %d is not a leap year ",year);
        }
    case 4:
        printf("\ enter any value : ");
        scanf("%d",&m);
        for(i=1;i<=m/2;i++)
        {
            if(num%i==0)
            {
                sum+=i;
            }
        }
        if(sum == m)
        {
            printf("\n %d is perfect number ",m);
        }
        else
        {
            if(sum > m )
            {
                printf("\n %d is abundant number ",m);
            }
            else
            {
                printf("\n %d deficient number ",m);
            }
        }





    }
}
