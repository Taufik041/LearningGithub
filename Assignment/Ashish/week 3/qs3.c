#include <stdio.h>

void main()
{
    int a, b, *p, *q, sum;
    
    printf("\nEnter two integers to add: ");
    scanf("%d%d", &a, &b);
    
    p = &a;
    q = &b;
    
    sum = *p + *q;
    
    printf("Sum of entered numbers = %d\n",sum);
    
}

