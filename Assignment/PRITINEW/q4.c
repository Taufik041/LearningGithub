#include<stdio.h>
int main (){
    int a, b , i;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",  &a,&b);
    printf("ENTER THE OPERATION : 1.ADD,2.SUB,3.MULTIPLY,4.DIVIDE\n");
    scanf("%d", &i);
    
    switch(i){
        case 1: 
        printf("THE SUM IS %d\n ", a+b);
        break;
        case 2: 
        printf("THE DIFFERENCE IS %d\n ", a-b);
        break;
        case 3: 
        printf("THE product IS %d\n ", a*b);
        break;
        case 4: 
        printf("WHEN WE DIVIDE %d BY %d WE GET %d" , a , b , a/b);
        break;
        default:
        printf("INVALID OPERATION\n");
        break;
        

    }
    return 0;
}