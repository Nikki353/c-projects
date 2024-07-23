#include<stdio.h>
void main()
{
    float amount,time,rate,si,omi;
    float pa;
    printf("Amount given : ");
    scanf("%f",&amount);
    printf("No of months : ");
    scanf("%f",&time);
    printf("Rate of interest : ");
    scanf("%f",&rate);
    system("cls");


    printf("Actual amount given     : %f \n",amount);
    printf("No of months            : %f \n",time);
    printf("Rate of simple interest : %f \n",rate);
    printf("\n");


    omi=(amount*rate)/100;
    printf("one month interest      : %f \n",omi);

    si=(amount*rate*time)/100;
    //si=(omi*time);
    printf("Simple interest         : %f ",si);

    printf("\n");
    pa=si+amount;
    printf("Amount payable          : %f ",pa);
    printf("\n");
}
