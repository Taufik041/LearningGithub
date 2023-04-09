#include<stdio.h>
void main()
{
    int a[10]={-1,1,3,-5,7,8,-9,-10,11,-12},i;
    for(i=0;i<10;i++)
    {
        if(a[i]<0)
        printf("%d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>0)
        printf("%d ",a[i]);

    }
}    
