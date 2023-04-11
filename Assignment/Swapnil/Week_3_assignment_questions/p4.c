// Write a C program to find the factorial of a number using pointers.
# include <stdio.h>
int fact(int*);
int fact(int *p)
{
    if((*p) == 1)
    {
        return 1;
    }
    else
    {
        int x = (*p)-1;
        return (*p)*fact(&x);
    }
}
int main()
{
    int n = 0;
    int *pntr = &n;
    printf("Enter number : ");
    scanf("%d",pntr);
    printf("Factorial of %d is %d.",(*pntr),fact(pntr));
    return 0;
}