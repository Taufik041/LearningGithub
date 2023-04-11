#include <stdio.h>
#include <string.h>

void main()
{
   char str[100];
   int c = 0, count[26] = {0}, x;

   printf("\n Enter a string: ");
   gets(str);

   while (str[c] != '\0') 
   {
  
      if (str[c] >= 'a' && str[c] <= 'z') 
      {
         x = str[c] - 'a';
         count[x]++;
      }

      c++;
   }

   for (c = 0; c < 26; c++)
   {
       printf("%c occurs %d times in the string.\n", c + 'a', count[c]);
   }
         

}