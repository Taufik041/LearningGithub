// Write a program to remove all characters except alphabets in a string.

# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    char str_final[100];
    printf("Enter string : ");
    scanf("%s",str);
    int l = strlen(str);
    int a = 0;
    for(int i = 0; i < l; i++)
    {
        
        int c_ascii = (int)str[i];
        if(((c_ascii >= 65) && (c_ascii <= 90)) || ((c_ascii >= 97) && (c_ascii <= 125)))
        {
            str_final[a] = str[i];
            a++;
        }
        

    }
    printf("String after removing all charcters except alphabet...\n");
    printf("%s",str_final);
}