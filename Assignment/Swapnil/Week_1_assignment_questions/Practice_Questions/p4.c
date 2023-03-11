// Write a C program to input angles of a triangle and check whether the triangle is valid or not.

# include <stdio.h>
int main()
{
    float a,b,c,sum;
    printf("Enter angles(in degrees) : \n");
    scanf("%f %f %f",&a,&b,&c);
    sum = a+b+c;
    if(sum == 180)
    {
        printf("The triangle is valid.");

    }
    else
    {
        printf("The triangle is not valid.");
    }
}