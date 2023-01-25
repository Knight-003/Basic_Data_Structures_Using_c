#include <stdio.h>

int fact(int n)
{
    int b = n;
    if (n == 1 || n == 0)
    {
        return 1;
    }
    
    else
    {
        
        for (int i = (n - 1); i > 0; i--)
        {
            b = b * i;
        }
    }
    return b;
}

int main()
{
    int b, y;

    printf("enter the number");

    scanf("%d", &b);
    y = fact(b);
    printf("the fctorial is%d", y);

    return 0;
}