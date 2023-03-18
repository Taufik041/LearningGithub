#include<stdio.h>
int main (){
    int r ;
    float a,c,d;
    float pi=3.14;

    printf("ENTER THE RADIUS\n");
    scanf("%d", &r);

    a=pi*r*r;
    c=2*pi*r;
    d=2*r;

    printf("THE AREA IS %f\n", a);
    printf("THE CIRCUMFERENCE IS %f\n", c);
    printf("THE DIAMETER IS %f\n", d);
    
    return 0;


}