#include <stdio.h>

int sum(int n)
{

    int y, sum = 0;
    while (n > 0)
    {
        y = n % 10;
        sum = sum + y;

        n = n / 10;
    }
    return sum;
}

int main()
{
    int s, y;
    printf("enter the number ");
    scanf("%d", &s);
    y = sum(s);
    printf("the sum is %d", y);

    return 0;
}