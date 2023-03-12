// Write a C program to check whether a year is leap year or not.

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int year;
    bool x = false;
    printf("_ _  _ Check if a year is leap year or not _ _ _\n");
    printf("Enter the year : ");
    scanf("%d", &year);
    if((year % 100) == 0)
    {
        if(year % 400 == 0)
        {
            x = true;
        }
        else{
            x = false;
        }

    }
    else{
        if(year % 4 == 0)
        {
            x = true;
        }
        else
        {
            x = false;    
        }
    }

    if(x == true)
    {
        printf("%d is a leap year.",year);
    }
    else
    {
        printf("%d is not a leap year.",year);
    }
    }