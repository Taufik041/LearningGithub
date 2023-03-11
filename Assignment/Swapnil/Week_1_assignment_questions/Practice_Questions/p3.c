// Write a program to enter length in centimetres and convert it into meter and kilometer.
# include <stdio.h>
int main()
{
    float l,l_m,l_k;
    printf("Enter length(in cms) : ");
    scanf("%f", &l);
    l_m = l/100;
    l_k = l_m/1000;
    printf("Length (in meter) = %f\n",l_m);
    printf("Length (in kilometer) = %f\n",l_k);
    return 0;
}