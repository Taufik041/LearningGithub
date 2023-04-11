#include<stdio.h>
#include<conio.h>
void Factorial(int,int *); 
int main(){
 int fact,n;
 printf("Enter a number: ");
  scanf("%d",&n);
   Factorial(n,&fact);
   printf("Factorial %d is: %d",n,fact);
    return 0;
} 
   void Factorial(int n,int *fact){
  int i;
 *fact=1;
 for(i=1;i<=n;i++)
 *fact=*fact*i;
}