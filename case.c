#include<stdio.h>
void main()
{
    int day;
    printf("\n enter the number of the day : ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("\n Monday is the first day ");
        break;
    case 2:
        printf("\n Tuesday is the second day");
        break;
    case 3:
        printf("\n Wednesday is the third day");
        break;
    case 4:
        printf("\n Thursday is the fourth day");
        break;
    case 5:
        printf("\n Friday is the fifth day");
        break;
    case 6:
        printf("\n Saturday is the sixth day");
        break;
    default :
        printf("\n Sunday is the main day");
        break;
    }
}
