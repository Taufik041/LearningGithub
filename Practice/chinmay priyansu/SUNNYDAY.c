#include <stdio.h>

int main(void) {
    int T;
    int X,i;
    scanf ("%d",&T);
    if (T>=1 && T<=100)
    {
    for (i=1;i<=T;i++){
    scanf ("%d",&X);
    if (X>=1 && X<=100)
    if (X>24)
    printf ("yes");
    else
    printf ("no");
    printf("\n");
    }
    }
    else
    printf("Wrong Input");
    return 0;
}

