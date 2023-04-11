#include<stdio.h>
void main()
{
    int a,b=0,i,n;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];printf("first element");
    scanf("%d",&arr[0]);
    a=arr[0];printf("enter elements of the array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(a==arr[i])
        b=b+1;
    }
    printf("the number of occurence of a number in array=%d is %d",a,b);
}