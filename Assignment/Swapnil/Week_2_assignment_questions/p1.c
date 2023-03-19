// Write a program to count the number of occurences of a number in an array using function.

# include <stdio.h>

int main()
{
    int len,n,count = 0;
    printf("Enter no of elements in an array : ");
    scanf("%d",&len);
    int a[len];
    for(int i = 0; i < len; i++)
    {
        printf("Enter element %d : ",(i+1));
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to find occurence of : ");
    scanf("%d", &n);
    for(int j = 0; j < len; j++)
    {
        if(n == a[j])
        {
            count++;
        }

    }
    printf("%d is present %d times.",n,count);
}