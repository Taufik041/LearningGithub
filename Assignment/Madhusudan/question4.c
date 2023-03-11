#include <stdio.h>
int main()
{
    int a,b,n,sum,sub,mul,div,mod;
    n=1;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    switch(n)
    {
        case 1:printf("sum=%d\n",a+b);
        
        case 2:printf("sub=%d\n",a-b);
        
        case 3:printf("mul=%d\n",a*b);
       
        case 4:printf("div=%d\n",a/b);
    
        case 5:printf("mod=%d\n",a%b);
        break;
        default:
        printf("thankyou bhaiya");

    }

    return 0;
}