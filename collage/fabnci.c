#include <stdio.h>

int main()
{
    int c, a = 0, n, b = 1;
    printf("enter the index value ");
    scanf("%d", &n);
    for (int i = 0; i <= (n - 1); i++)
    {
        printf("the %d element is %d\n", (i + 1), a);

        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}