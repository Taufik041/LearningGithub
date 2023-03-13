#include <stdio.h>
int main() {
    int num ,sum=0;
    printf("enter any number :");
    scanf ("%d", &num);
    
    do{
        sum=sum+ num%10;
        num=num/10;

    }
    while(num >0);
    printf("sum is %d\n ",sum);
    
    return 0;
}