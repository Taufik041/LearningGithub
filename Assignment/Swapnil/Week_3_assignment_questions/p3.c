// Write a C program to add two numbers using pointers.
# include <stdio.h>
int main()
{
    int a,b;
    int *p1 = &a;
    int *p2 = &b;
    printf("Enter 1st number : ");
    scanf("%d",p1);
    printf("Enter 2nd number : ");
    scanf("%d",p2);
    int sum = (*p1) + (*p2);
    printf("Sum of two numbers is %d.",sum);
    return 0;
}