#include<stdio.h>
#include<conio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num>0)
        printf("%d is positive.", num);
    else if (num<0)
        printf("%d is negetive.", num);
    else
    printf ("the given number is zero");
    return 0;
}