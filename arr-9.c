//average
#include<stdio.h>
void main()
{
    int arr[]={3,33,333,3333,33333},size=5;
    int i;
    printf(" array elements : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    float avg = (float) sum / size;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    printf("\n");
    printf("avg : %f ",avg);
}
