#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int z=sum(x,y);
    printf("%d",z);
    return 0;
}
