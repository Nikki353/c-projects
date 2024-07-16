//sum of arrays elements
#include<stdio.h>
void main()
{
    int arr[]={1,3,5,7,9};
    int i,sum=0;
    printf("Arrays elements : \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("\n The sum of array values are : %d ",sum);
    printf("\n");
}
