#include<stdio.h>
void main()
{
    float rad,r;
    float area;
    printf(" Enter rad value : ");
    scanf("%f",&rad);
    printf("\n");
    r=rad*rad;
   // printf("r value : %f \n",r);
    area=3.14159265359*r;
    printf("Area of the circle : %f ",area);
    printf("\n");
}

