// Write a program to count the number of occurences of a number in an array using function.

# include <stdio.h>
void arr_input( int*, int);
int cnt_no_of_occurences(int*,int,int);
void arr_input(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d : ",(i+1));
        scanf("%d",a);
        a++;
    }

}
int cnt_no_of_occurences(int *a, int l, int n)
{
    int count = 0;
    for(int j = 0; j < l; j++)
    {
        if(n == a[j])
        {
            count++;
        }

    }
    return count;
}
int main()
{
    int len,n,count = 0;
    printf("Enter no of elements in an array : ");
    scanf("%d",&len);
    int a[len];
    int *p = &a[0];
    arr_input(p,len);
    printf("Enter the element you want to find occurence of : ");
    scanf("%d", &n);
    
    printf("%d is present %d times.",n,cnt_no_of_occurences(p,len,n));
}