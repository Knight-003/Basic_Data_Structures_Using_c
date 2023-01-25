#include <stdio.h>
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

int main()
{
    int s, y;
    printf("enter the number ");
    scanf("%d", &s);
    y = count(s);
    printf("the number of digit is%d ", y);
    return 0;
}
