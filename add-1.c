#include<stdio.h>
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}

int main()
{
    int results;
    results=add(3,5);
    printf("\n the sum is %d ",results);
    printf("\n");

}
