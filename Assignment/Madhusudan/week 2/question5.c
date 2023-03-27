#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5},b[5],i=0;
    printf("the elements of a arrary are:\n");
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
        printf("%d ",a[i]);
    }
    printf("\n");
    printf(" the elements of b array are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);

    }
}


    
