#include<stdio.h>
void main()
{
    int num[100],j,number;
    int sum=0,i;
    printf("\n how many numbers you want : ");
    scanf("%d",&number);
    for(j=0;j<number;j++)
    {
        printf("\n Enter [%d] element : ",j);
        scanf("%d",&num[j]);
        system("cls");
        sum+=num[j];
    }
    for(i=0;i<number;i++)
    {
        printf("\n you have given [%d] : %d ",i,num[i]);
    }
    printf("\n The sum of elements are : %d",sum);

}
