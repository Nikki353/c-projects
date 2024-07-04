#include<stdio.h>
void main()
{
    int num;
    printf("\n enter any number : ");
    scanf("%d",&num);
    switch(num > 0 ? 1 : num < 0 ? -1 : 0)
    {
    case 1:
        printf("\n %d is positive ",num);
        break;
    case -1:
        printf("\n %d is negative ",num);
        break;
    case 0:
        printf("\n %d is zero ",num);
        break;
    }



}
