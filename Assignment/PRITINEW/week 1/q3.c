#include<stdio.h>
int main(){

    int sum=0;
    int n,i;

    printf("ENTER THE NUMBER\n");
    scanf("%d", &n);

    do{
        i = n % 10;
        n = n / 10;
        sum = sum + i ;
    }
    while(n!=0);
    printf("THE SUM OF IS %d", sum);

    return 0;
    
} 