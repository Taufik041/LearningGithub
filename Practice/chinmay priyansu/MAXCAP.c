#include <stdio.h>

int main(void) {
    int T;
    int X,Y,i;
    scanf ("%d",&T);
    if (T>=1 && T<=1000)
    {
        for (i=1;i<=T;i++)
        {
        scanf ("%d",&X);
        scanf ("%d",&Y);
        if (X>=1 && X<=100 && X*Y<=500 && X<=8)
        printf ("yes\n");
        else
        printf ("no\n");
        }}
    else
    printf ("wrong input");
	return 0;
}

