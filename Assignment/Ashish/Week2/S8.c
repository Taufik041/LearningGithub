// Write a program to find the number of vowels and consonants in a string.

# include <stdio.h>
# include <string.h>

void main()
{
    char str[100];
    int n_v = 0,n_c = 0,l;

    printf("Enter string : ");
    gets(str);
    l = strlen(str);

    for(int i = 0; i < l; i++)
    {
        char c = str[i];
        int x = (int)c;

        if(( x >= 97 && x <= 122) || ( x >= 65 && x <= 90))
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            {
                n_v++;


            }
            else
            {
                n_c++;

            }
        }

    }
    printf("No of vowels = %d.\n",n_v);
    printf("No of consonants = %d.\n",n_c);
}
