#include<stdio.h>
int main(){
    int i;
    printf("INPUT THE NUMBER\n");
    scanf("%d", &i);
     if(i<0)
     printf("THE NUMBER IS NEGATIVE\n", i);
     else if(i>0)
     printf("THE NUMBER IS POSITIVE\n", i);
     else if(i==0)
     printf("THE NUMBER IS ZERO\n", i);
     
    return 0;

}