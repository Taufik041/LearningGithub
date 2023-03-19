#include<stdio.h>
void main()
{
    int r;
    float c,area;
    printf("enter the radius:");
    scanf("%d",&r);
    printf("diameter=%d\n",2*r);
    c=2*3.14*r;
    printf("circumference=%f\n",c);
    area=3.14*r*r;
    printf("area=%f\n",area);
}