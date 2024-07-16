//removing duplicate
#include<stdio.h>
void main()
{
    int arr[]={1,1,2,2,3,3,4,4,5,5};
    int i,j;
    int size=10;
    printf("Array elements : \n ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    int unique[size],k=0;
    for(i=0;i<size;i++)
    {
        int duplicate=0;
        for(j=0;j<k;j++)
        {
            if(arr[i]==unique[j])
            {
                duplicate=1;
                break;
            }
        }
        if(!duplicate)
       {
        unique[k++]=arr[i];
       }
    }

    printf("\n");
    printf("New Array elements : \n");
    for(i=0;i<k;i++)
    {
        printf("%d ",unique[i]);
    }

}
