#include <stdio.h>
int main() {
    int p,q,m;
    m=1;
    printf ("enter two numbers:\n ");
    scanf ("%d%d",&p,&q);
    switch(m)
    {
    case 1 : printf("sum =%d\n",p+q);
    
    case 2 : printf("sub =%d\n" , p-q);
    
    case 3 :printf("multiplication = %d\n",p*q);
    
    
    case 4 :printf("div =%d\n",p/q);
    

   case 5 :printf("mod=%d\n", p%q);
   break;
   
   default :printf("not applicable");
   
    }
    return 0;
}
