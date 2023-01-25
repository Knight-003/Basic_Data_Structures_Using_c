#include<stdio.h>
int count(int n)
{
    int i = 0;
    while (n > 0)
    {
        i = i + 1;

        n = n / 10;
    }

    return i;
}