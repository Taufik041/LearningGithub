// Write a C program to remove a specific character from a string.
# include <stdio.h>
# include <string.h>
int main()
{
    char str[30];
    
    printf("Enter string : ");
    gets(str);
    int l = strlen(str);
    char str1[l];
    int x = 0;
    // printf("%d",l);
    char c;
    printf("Enter the character to remove : ");
    scanf("%c",&c);
    for(int i = 0; i < l; i++)
    {
        if(str[i] == c)
        {
            continue;
        }
        str1[x] = str[i]; 
        x++;
    }
    int l1 = strlen(str1);
    for(int j = 0; j < l-1; j++)
    {
        printf("%c",str1[j]);
    }
    
    return 0;
}