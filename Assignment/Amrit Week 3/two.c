#include<stdio.h>  
#include<string.h>  
   
int main()
   {
    char s[] = "amrit";  
    int i,j,l= strlen(s);  
    int freq[l];  
      for(i=0;i<strlen(s);i++) 
      {  
        freq[i]=1;  
        for(j=i+1;j<strlen(s);j++) {  
            if(s[i]==s[j]) {  
                freq[i]++;  
                s[j]='0';  
            }  
        }  
     }  
      for(i=0;i<l;i++) {  
        if(s[i]!=' '&& s[i]!= '0')  
            printf("%c-%d\n",s[i],freq[i]);  
    }  
          
    return 0;  
 }  
