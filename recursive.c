#include <stdio.h>
int factorial();
int main()
{
    int number = 3;
    int result;
    result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
/*
//this part can also be used
int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
*/
