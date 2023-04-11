#include<stdio.h>
#include<string.h>

void main()
{
    char str[100],ch;
    int i,j,len;

    printf("\n Enter any string of your choice: ");
    gets(str);

    printf("\n Enter the character you want to remove: ");
    scanf("%c", &ch);

    len= strlen(str);

    for(i=0; i<len; i++)
    {
        if (str[i]==ch)
        {
            for(j=i; j<len; j++)
            {
                str[j]=str[j+1];
            }
            len--;
            i--;
        }
    }
    printf("\n String after removing '%c': %s",ch,str);

}