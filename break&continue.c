#include<stdio.h>
void main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i<=3)
        {
            continue;
        }
        printf("%d ",i);
    }
    printf("\n");
    printf("outside the loop");
}
