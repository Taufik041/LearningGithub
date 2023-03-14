#include <stdio.h>
int main(){
	int a,b,i;
	printf("enter two nos:");
	scanf("%d%d",&a,&b);
	printf("enter operation to operate(1-add,2-substract,3-multilication,4-division)");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("Addition of %d and %d is %d",a,b,a+b);
			break;
		case 2:
		   	printf("Substraction of %d and %d is %d",a,b,a-b);
		   	break;
		case 3:
			printf("Multiplication of %d and %d is %d",a,b,a*b);
			break;
		case 4:
			printf("Division of %d and %d is %d",a,b,a/b);
			break;
		default:
		    printf("Invalid input");		
			break;	   	
	}
	return 0;
}