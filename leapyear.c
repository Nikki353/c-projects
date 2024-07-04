#include<stdio.h>
void main()
{
    int year;
    printf("\n ENTER YEAR : ");
    scanf("%d",&year);
   if((year % 4 ==0 && year % 100 !=0 || year % 400 == 0))
    {
        printf("\n GIVEN YEAR IS LEAP YEAR : %d ",year);
    }
    else
    {
        printf("\n GIVE YEAR IS NOT LEAP YEAR : %d ",year);
    }
    getch();
}
