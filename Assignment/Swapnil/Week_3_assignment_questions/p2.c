//  Write a C program to count the frequency of each character of the string.
# include <stdio.h>
# include <string.h>
int main()
{
    char str[30];
    printf("Enter string : ");
    gets(str);
    int l = strlen(str);
    char ltrs[30];
    int x = 0;
    int flag = 0;
    for(int i = 0;  i < l; i++)
    {
        flag = 0;

        char c = str[i];
        for(int j = 0; j < l; j++)
        {
            if(c == ltrs[j])
            {
                flag = 1;
                
            }
        }
        if(flag != 1)
        {
            
            int count = 0;
            ltrs[x] = c;
            x++;
            for(int i = 0; i < l; i++)
            {
                if(c == str[i])
                {
                    count++;
                }
            }
            printf("%c is present %d times.\n",c,count);
        }
    }
    return 0;
}