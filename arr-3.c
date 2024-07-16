//comparing two array elements
#include<stdio.h>
void main()
{
    int arr1[]={1,2,3,4,5},arr2[5];
    int i;
    printf("Array - 1 values : \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr1[i]);
    }
    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\n");
    printf("Array - 2 values : \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");


}
