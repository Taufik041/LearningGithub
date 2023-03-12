// Write a C program to enter marks of five subjects and calculate total, average and percentage.

# include <stdio.h>
int main()
{
    float a,b,c,d,e,total,avg,per;
    printf("Enter marks for 5 subjects... \n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    total = a+b+c+d+e;
    avg = total/5;
    per = (total/500)*100;
    printf("Total = %f\n",total);
    printf("Average = %f\n",avg);
    printf("Percentage = %f%%\n",per);
    
}