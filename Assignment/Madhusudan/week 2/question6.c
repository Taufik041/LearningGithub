#include<stdio.h>
void main()
{
    int a,i,b[8]={1,9,3,2,7,3,9};
    int c,d,j,r=0;
    for(i=0;i<8;i++)
    {
        int k=0;
        c=b[i];
        for(j=0;j<8;j++)
        {
            if(c==b[j])
            k++;
        }
        if(k>r)
        {
            r=k;
            d=c;
        } 
    }
        printf(" the maximum occurence of integer %d is : %d",d,r);
}


        
    