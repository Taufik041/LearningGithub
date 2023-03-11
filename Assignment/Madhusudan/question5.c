#include<stdio.h>
int main()
{
    float radius,Area,Circumference,Diameter,pi=3.14;
    printf("enter radius of a circle ");
    scanf("%f" ,&radius);
    printf("Area of a circle =%f\n",2*radius);
    printf("Circumference of a circle =%f\n",pi*radius*radius);
    printf("Diameter of a circle =%f\n",2*pi*radius);

    return 0;
}
