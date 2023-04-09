// Write  a program to convert a decimal number to a binary number using functions.
# include <stdio.h>
# include <string.h>

int main()
{
    
    int a;
    printf("Enter a positive number : ");
    scanf("%d",&a);
    if(a < 0)
    {
        a = -a;
    }
    else
    {
        a = a;
    }
    int n = a;
    char b[32];
    int j = 0;
    int zero = 48;
    int one = 49;
    int r;
    int c = 0;
    while(a > 0)
    {
        c++;
        r = a%2;
        if(r == 0)
        {
            b[j] = (int)zero;
        }
        else if(r == 1)
        {
            b[j] = (int)one;
        }
        
        a = a/2;
        j++;
        
    }
    printf("Binary equivalent of %d = ",n);
    for(int i=c-1; i >= 0; i--)
    {
        printf("%c",b[i]);
    }
    
    
    return 0;
}