#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enetr two numbers:");
    scanf("%d%d",&a,&b);
    printf("ENTER:\n");
    printf("1.for addition");
    printf("2.for subtraction");
    printf("3.for multiplication");
    printf("4. for division");
    printf("Enter a choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("sum=%d",a+b);
        break;
        case 2:
        printf("differ=%d",a-b);
        break;
        case 3:
        printf("multiply=%d",a*b);
        break;
        case 4:
        printf("div=%d",a/b);
        break;
        default:
        printf("error");
    }
}