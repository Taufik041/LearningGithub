// Write a program to take two 2-D array as input of order 3*3 and print the sum of two 2-D array.
# include <stdio.h>
void arr_input(int*,int,int);
void arr_output(int*, int r, int c);
void sum(int*,int*,int*,int,int);
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
void sum(int*p,int*p1,int*p2,int r,int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            *p = (*p1) + (*p2);
            p++;
            p1++;
            p2++;
        }
    }
}
int main()
{
    int r,c;
    printf("Enter the no of rows of the matrix : ");
    scanf("%d",&r);
    printf("Enter the no of columns of the matrix : ");
    scanf("%d",&c);
    int arr1[r][c];
    int *p1 = &(arr1[0][0]);
    printf("_ _ _ _Enter elements of first array_ _ _ _\n");
    arr_input(p1,r,c);
    int arr2[r][c];
    int *p2 = &(arr2[0][0]);
    printf("_ _ _ _Enter elements of second array_ _ _ _\n");
    arr_input(p2,r,c);
    int arr[r][c];
    int *p = &(arr[0][0]);
    sum(p,p1,p2,r,c);
    printf("Resultant 2D array after summation of two arrays is \n");
    arr_output(p,r,c);

    return 0;
}