
#include<stdio.h>
int main()
{
  int a[1000],c[1000],n,i;
  printf("enter the size of the first array=");
  scanf("%d",&n);
  printf("enter the values of the first array=");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    c[i]=a[i];
  }
  printf("the first array=");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\nthe copied array=");
  for(i=0;i<n;i++)
  {
    printf("%d ",c[i]);
  }
  return 0;
}