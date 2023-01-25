#include <stdio.h>

void leap(int a)
{
    if (a % 4 == 0)
    {
        if (a % 100 == 0)
        {
            printf("the year is a non leap year");
        }
        else
        {
            printf("this is a leap year");
        }
    }

    else
    {
        printf("the year is a non leap year ");
    }
}

int main()
{
    printf("enter the year ");
    int x;
    scanf("%d", &x);

    leap(x);

    return 0;
