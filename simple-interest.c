#include<stdio.h>
void main()
{
    int amount,time,rate,si;
    int pa;
    printf("Amount given : ");
    scanf("%d",&amount);
    printf("No of months : ");
    scanf("%d",&time);
    printf("Rate of interest : ");
    scanf("%d",&rate);
    system("cls");
    printf("Actual amount given     : %d \n",amount);
    printf("No of months            : %d \n",time);
    printf("Rate of simple interest : %d \n",rate);
    printf("\n");
    si=amount*rate*time/100;
    printf("Simple interest         : %d ",si);
    printf("\n");
    pa=si+amount;
    printf("Amount payable          : %d ",pa);
    printf("\n");
}
