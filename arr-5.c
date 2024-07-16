//finding an element
#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5},i;
    int size=5,key=4;
    int found=0;
    printf("Array elements : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
      if(arr[i]==key)
      {
          found=1;
          break;
      }
    }
    printf("\n");
    if(found)
    {
        printf("Element %d is found ",key);
    }
    else
    {
        printf("Element %d not found ",key);
    }
    printf("\n");
}
