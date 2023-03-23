# include <stdio.h>

void main()
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

}