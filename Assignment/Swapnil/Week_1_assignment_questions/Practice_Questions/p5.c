// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

# include <stdio.h>
int main()
{
    float a,b,c,sum;
    printf("Enter length of sides : \n");
    scanf("%f %f %f",&a,&b,&c);

    if(a==b && b == c)
    {
        printf("It is an equilateral triangle.");
    }
    else if(a==b || b==c || a==c)
    {
        printf("It is an isosceles triangle.");
    }
    else
    {
        printf("It is a scalene triangle.");
    }
}