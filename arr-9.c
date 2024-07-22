//average
#include<stdio.h>
void main()
{
    int arr[]={3,33,333,3333,33333},size=5;
    int i;
    float sum=0;
    printf(" array elements : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    float avg;
    avg=sum/size;
    printf("\n");
    printf("avg : %f ",avg);
}
