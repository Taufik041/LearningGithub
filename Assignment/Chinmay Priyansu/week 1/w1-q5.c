#include<stdio.h>
void main()
{
    float r,d,a,c,pi=3.14;
    printf ("enter the radius");
    scanf ("%f",&r);
    d=r*2;
    a=pi*r*r;
    c=2*pi*r;
    printf ("Diameter is %f",d);
    printf ("Area is %f",a);
    printf ("Circumference is %f",c);
}