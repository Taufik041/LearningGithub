// Write a program to check whether a number is Armstrong or not using functions.
# include <stdio.h>
int power(int, int);
void chk_armstrong(int);
int chk_no_of_digits(int);
int power(int n, int p)
{
    int sum = 1;
    if(p == 0)
    {
        return 1;
    }
    else
    {
        while(p != 0)
        {
            sum = sum*n;
            p--;   
        }
    }
}
int chk_no_of_digits(int n)
{
    int c = 0;
    while(n != 0)
    {
        c++;
        n = n/10;
    }
    return c;

}
void chk_armstrong(int n)
{
    int x = n;
    int n_d = chk_no_of_digits(n);
    int sum = 0;
    while(x>0)
    {
        int d = x%10;
        sum = sum + power(d,n_d);
        x = x/10;
    }
    if(sum == n)
    {
        printf("%d is an Armstrong number.",n);
    }
    else
    {
        printf("%d is not an Armstrong number.",n);
    }
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    chk_armstrong(a);
    
    return 0;
}