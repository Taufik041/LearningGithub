#include <stdio.h>
int main() {
    int n, i,a=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
do{
    i=n%10;
    n=n/10;
    a=a+i;
}
while (n!=0);
printf ("sum of digits of number is %d",a);

    return 0;
}