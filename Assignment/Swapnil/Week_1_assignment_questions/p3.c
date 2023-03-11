// Write a program that takes a number as input and print the sum of its digits using do while loop.

# include <stdio.h>

int main()
{
    int n,r,sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    do
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
        
    } while (n>0);
    printf("Sum of its digits is %d.", sum);
    return 0;
}