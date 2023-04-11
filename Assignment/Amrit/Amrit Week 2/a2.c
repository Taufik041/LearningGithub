#include<stdio.h>
int main()
{
  int a[1000],b[1000],c[2000],n,m,u,i;
  printf("enter the size of the first array=");
  scanf("%d",&n);
  printf("enter the values of the first array=");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the size of the second array=");
  scanf("%d",&m);
  printf("enter the values of the second array=");
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  u=n+m;
  for(i=0;i<n;i++)
  {
    c[i]=a[i];
  }
  for( i = 0; i < m; i++) 
  {    
        c[i + n] = b[i];
  }
        
  printf("the values of the merged array =");
  for(i=0;i<u;i++)
  {
    printf("%d ",c[i]);
  }
  printf("\nthe reversed order=");
  for(i=u-1;i>=0;i--)
  {
    printf("%d ",c[i]);
  }


  return 0;

}