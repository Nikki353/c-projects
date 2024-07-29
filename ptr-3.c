#include<stdio.h>
void main()
{
    int *ptr;
    int n,i;
    printf("\n Enter n value : ");
    scanf("%d",&n);
    ptr=(int *) malloc (n * sizeof(int));
    if(*ptr == NULL)
    {
        printf("\n Error in memory allocation ");
    }
    printf("\n Enter %d values : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(ptr+i));
    }
    printf("\n Entered values : ");
    for(i=0;i<n;i++)
    {
        printf("%d,",*(ptr+i));
    }
}
