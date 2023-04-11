#include<stdio.h>
#include<string.h> 

void main() {
  
  char f[100], s[20];
  int i,j,a,c,t,d=0;
  
  
  printf("Enter the String: ");
  gets(f);
  
  
  printf("Enter a Word: ");
  gets(s);
  
  
  a=strlen(f);
   c=strlen(s);

  
  for(i=0;i<a;i++) {
    t=i;
    for(j=0;j<c;j++) {
      if (f[i]==s[j])
        i++;
    }
    d=i-t;
    if(d==c) {
      i=t;
      for(j=i;j<(a - c);j++)
        f[j]=f[j+c];
      a=a-c;
      f[j]= '\0';
    }
  }
  
  
  printf("\nNew String = %s",f);
}



