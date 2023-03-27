#include<stdio.h>
void main()
{
    int c[10],i,j=5;
   int a[5]={1,2,3,4,5};
   int b[5]={6,7,8,9,10};
   for(i=0;i<10;i++)
   {
    if(i<=4)
    c[i]=a[i];
    else 
    c[i]=b[i-j];
   }
   printf("the reverse order of array\n");
   for(i=9;i>=0;i--)
   {
    printf("%d ",c[i]);
   }
}