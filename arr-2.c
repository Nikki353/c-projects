//finding largest element
#include<stdio.h>
void main()
{
    int arr[]={3,333,9,99,39};
    int i,max=arr[0];
    printf("Arrays elements : \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Largest number is %d ",max);
    printf("\n");
}
