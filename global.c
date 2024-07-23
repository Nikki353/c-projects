#include<stdio.h>
int gv=333;
void testfunction()
{
    printf("\n global variable : %d ",gv);
    gv++;
    printf("\n global variable increment : %d ",gv);
}
void main()
{
    testfunction();
    printf("\n");

    int gv=3;

    for(gv=0;gv<=10;gv++)
    {
        printf("\n global variable modified : %d ",gv);
        if(gv==3)
        {
            break;
        }
    }

    printf("\n");
    testfunction();
    printf("\n");
}
