#include <stdio.h>

void add(int *num1, int *num2, int *sum);

int main()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    add(&num1, &num2, &sum);

    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

void add(int *num1, int *num2, int *sum)
{
    *sum = *num1 + *num2;
}
