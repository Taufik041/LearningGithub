#include<stdio.h>
#include<conio.h>
void Fact(int,int *); 
int main(){
 int fact,n;
 printf("Enter a number: ");
  scanf("%d",&n);
   Fact(n,&fact);
   printf("Factorial %d is: %d",n,fact);
    return 0;
} 
   void Fact(int n,int *fact){
  int i;
 *fact=1;
 for(i=1;i<=n;i++)
 *fact=*fact*i;
}