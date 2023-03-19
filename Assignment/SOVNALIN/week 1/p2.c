#include<stdio.h>
void main()
{
    int i;
    printf("enter a number");
    scanf("%d",&i);
    if(i>0)
    printf("%d is POSITIVE NUMBER");
    else if(i<0)
    printf("%d is NEGATIVE NUMBER");
    else
    printf("ZERO");
}
