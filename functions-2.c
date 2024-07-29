#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float divide(int a,int b);

void main()
{
    int num1,num2;
    printf("\n Enter num-1 : ");
    scanf("%d",&num1);
    printf("\n Enter num-2 : ");
    scanf("%d",&num2);
    printf("\n\n");

    int sum=add(num1,num2);
    printf("\n The sum is : %d",sum);
    printf("\n");

    int difference=sub(num1,num2);
    printf("\n The subtraction is : %d",difference);
    printf("\n");

    int product=mul(num1,num2);
    printf("\n The multiplication is : %d",product);
    printf("\n");

    float quotient=divide(num1,num2);
    printf("\n The division  is : %f",quotient);
    printf("\n\n");

}

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

float divide(int a,int b)
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
