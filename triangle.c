#include<stdio.h>
void main()
{
    float s1,s2,s3;
    printf("\n ENTER THE THREE SIDES : ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1 == s2 && s2 == s3)
    {
        printf("\n TRIANGLE IS EQUALETERAL TRIANGLE ");
    }
    else
    {
        if(s1 == s2 || s2 == s3 || s3 == s1 )
        {
            printf("\n TRIANGLE IS ISOSCELES TRIAGLE ");
        }
        else
        {
            printf("\n TRIANGLE IS SCALEN TRIANGLE ");
        }
    }
    getch();
}
