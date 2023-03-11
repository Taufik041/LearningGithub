#include<stdio.h>
int main()
{
    int sum,i,j;
    sum=0;
    printf("enter a number");
    scanf("%d",&i);
    do
    {
        j=i%10;
        sum=sum+j;
        i=i/10;
    } while (i>0);
    printf("sum of digits %d",sum);

    
}