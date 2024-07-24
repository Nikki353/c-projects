#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void divide(int a,int b);

void main()
{
    int num1,num2;
    printf("\n Enter num-1 : ");
    scanf("%d",&num1);
    printf("\n Enter num-2 : ");
    scanf("%d",&num2);
    printf("\n\n");

    void sum=add(num1,num2);
    printf("\n The sum is : %d",sum);
    printf("\n");

    void difference=sub(num1,num2);
    printf("\n The subtraction is : %d",difference);
    printf("\n");

    void product=mul(num1,num2);
    printf("\n The multiplication is : %d",product);
    printf("\n");

    void quotient=divide(num1,num2);
    printf("\n The division  is : %d",quotient);
    printf("\n\n");

}

void add(int a,int b)
{
    return a+b;
}

void sub(int a,int b)
{
    return a-b;
}

void mul(int a,int b)
{
    return a*b;
}

void divide(int a,int b)
 {
    if (b==0)
    {
        printf("There is an error");
        return 0;
    }
    else
    {
        return (float)a / b;
    }
}
