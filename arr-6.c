//sorting
#include<stdio.h>
void main()
{
    int arr[]={1,3,5,4,2};
    int i,j,size=5;
    int temp;
    printf("Array elements : \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
            if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    printf("\n");
    printf("Sorted array : \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
