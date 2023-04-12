#include <stdio.h>
int main()
{
	int s,i,num,occr=0;
	printf("Please Enter the Array size = ");
	scanf("%d",&s);
	int a[s];	
	printf("Enter the Array %d elements:", s);
	for (i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Enter the Array Item to know = ");
	scanf("%d", &num);
	for (i=0;i<s;i++)
	{
		if (a[i]==num)
		{
			occr++;
		}
	}
	printf("%d Occurred %d Times.\n", num, occr);
	return 0;
}