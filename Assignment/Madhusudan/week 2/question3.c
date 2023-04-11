#include<stdio.h>
void main()
{
    int arr[5]={1,8,6,2,5};
    int i,j=0,c;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(arr[j+1]>arr[j])
            {
                c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        

            }
    }

        printf("the sorted array in descending order is :\n");
        for(i=0;i<5;i++)
        printf("%d",arr[i]);
        }
    