// Write a program to take a 2-D array as input of order 3*3 and print the transpose of the 2-D array.

# include <stdio.h>
void arr_input(int*,int,int);
void arr_transpose(int*,int,int);
void arr_output(int*, int r, int c);
void arr_input(int *p, int r, int c)
{
    

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            int x;
            printf("Enter elemet of row %d column %d : ",(i+1),(j+1));
            scanf("%d",p);
            p++;
        }
    }
}
void arr_output(int *p, int r, int c)
{
    

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            int x;
            //printf("Elemet of row %d column %d is %d.\n",(i+1),(j+1),(*p));
            printf("%d ",*p);
            p++;
        }
        printf("\n");
    }
}
void arr_transpose(int *p, int r, int c)
{
    int a_t[c][r];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            
            a_t[j][i] = *p;
            
            p++;
        }
    }
    arr_output(&(a_t[0][0]),c,r);
}


int main()
{
    int a[3][3];
    arr_input(&(a[0][0]),3,3);
    arr_transpose(&(a[0][0]),3,3);
    return 0;
}